class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), 
            n = matrix[0].size();
        
        vector<int> maxC(n, 0);
        set<pair<int, int>> Hash;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                maxC[j] = max(maxC[j], matrix[i][j]);
                if (matrix[i][j] == -1) Hash.insert({i, j});
            }
        }
      
        for (auto [i, j] : Hash) {
            matrix[i][j] = maxC[j];
        }
        return matrix;
    }
};
/*
    Matrix, 矩陣
*/
