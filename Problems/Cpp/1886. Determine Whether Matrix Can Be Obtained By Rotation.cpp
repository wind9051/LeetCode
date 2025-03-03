class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int len = mat.size(), ang0 = 0, ang90 = 0, ang180 = 0, ang270 = 0;
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (mat[i][j] == target[i][j]) ang0++;
                if (mat[i][j] == target[len-1 - j][i]) ang90++;
                if (mat[i][j] == target[len-1 - i][len-1 - j]) ang180++;
                if (mat[i][j] == target[j][len-1 -i]) ang270++;
            }
        }   
        return ang0 == len*len || ang90 == len*len || ang180 == len*len || ang270 == len*len;
    }
};
/*
    Matrix, 矩陣, 旋轉
*/
