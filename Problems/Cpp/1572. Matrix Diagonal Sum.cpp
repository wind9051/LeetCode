class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, len = mat.size();
        for (int i = 0; i < len; i++) {
            sum += mat[i][i];
            sum += mat[i][len-1-i];
        }
        if (len%2) sum -= mat[len/2][len/2];
        return sum;
    }
};
/*
    Matrix, 矩陣
*/  
