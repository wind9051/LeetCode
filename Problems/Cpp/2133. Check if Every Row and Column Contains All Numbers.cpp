class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            vector<bool> row(n+1, false), col(n+1, false);
            for (int j = 0; j < n; j++) {
                int rowVal = matrix[i][j];
                int colVal = matrix[j][i];
                
                if (row[rowVal]) return false;
                row[rowVal] = true;
                
                if (col[colVal]) return false;
                col[colVal] = true;
            }
        }
        return true;
    }
};
/*
    Matrix, 矩陣
*/
