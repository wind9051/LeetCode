/*
    matrix
*/
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ret = grid;
        for (int i = 0; i < m*n; i++) {
            int now = (i + k) % (m * n);
            ret[now/n][now%n] = grid[i/n][i%n];
        }
        return ret;
    }
};
