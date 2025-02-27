class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> row(m, 0), col(n, 0);
        for (auto i = 0; i < indices.size(); i++) {
            row[indices[i][0]]++;
            col[indices[i][1]]++;
        }
        int M_odd = 0, N_odd = 0;
        for (auto i = 0; i < row.size(); i++) M_odd += row[i] % 2 ? 1 : 0;
        for (auto i = 0; i < col.size(); i++) N_odd += col[i] % 2 ? 1 : 0;
        return M_odd * (n - N_odd) + N_odd * (m - M_odd);
    }
};
/*
    matrix, math, 數學, 矩陣, 奇偶
*/
