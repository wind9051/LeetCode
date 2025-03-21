class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int L = 0;
        vector<int> ret;
        for (int i = 0; i < n; i++) {
            if (i%2 == 0) {
                for (int j = 0, cnt = 0; j < m; j++, L++) {
                    if (L%2 == 0) ret.push_back(grid[i][j]);
                }
            }
            else {
                for (int j = m-1; j >= 0; j--, L++) {
                    if (L%2 == 0) ret.push_back(grid[i][j]);
                }
            }
        }
        return ret;
    }
};
/*
    Matrix, 矩陣
*/
