class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> r(m, INT_MAX); 
        vector<int> c(n, INT_MIN); 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                r[i] = min(r[i], matrix[i][j]);
                c[j] = max(c[j], matrix[i][j]);
            }
        }

        vector<int> ans;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == r[i] && matrix[i][j] == c[j]) ans.push_back(c[j]);
            }
        }
        return ans;
    }
};
/*
  matrix, 矩陣
*/
