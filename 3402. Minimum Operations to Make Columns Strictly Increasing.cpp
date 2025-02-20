/*
  Matrix
*/
class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        
        int ans = 0;
        for (int j = 0; j < C; j++) {
            int next = 0;
            for (int i = 0; i < R; i++) {
                if (grid[i][j] < next) {
                    ans += (next - grid[i][j]);
                    next++;
                } 
                else {
                    next = grid[i][j] + 1;
                }
            }
        }
        return ans;
    }
};
