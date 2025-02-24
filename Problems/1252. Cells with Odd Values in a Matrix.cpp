/*
    matrix, math
*/
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> M(m, 0), N(n, 0);
        for (auto i = 0; i < indices.size(); i++) {
            M[indices[i][0]]++;
            N[indices[i][1]]++;
        }
        int M_odd = 0, N_odd = 0;
        for (auto i = 0; i < M.size(); i++) M_odd += M[i] % 2 ? 1 : 0;
        for (auto i = 0; i < N.size(); i++) N_odd += N[i] % 2 ? 1 : 0;
        return M_odd * (n - N_odd) + N_odd * (m - M_odd);
    }
};
