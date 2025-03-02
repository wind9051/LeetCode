class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int M = grid.size(), N = grid[0].size();
        
        int i = M-1, j = 0;
        int cnt = 0;
        while (i >= 0 && i < M && j >= 0 && j < N) {
            if (grid[i][j] < 0) {
                cnt += N - j; 
                i--;
            }
            else {
                j++;
            }
        }       
        return cnt;
    }
};
/*
    Matrix, 矩陣, 對角線
    [3,0],[2,0],[2,1],[2,2],[1,2],[1,3],[0,3]
*/
