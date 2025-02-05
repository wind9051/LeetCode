class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> maxNum(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                maxNum[i] = max(maxNum[i], matrix[j][i]);
            }
        }
      
        vector<vector<int>> ret = matrix;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == -1) ret[i][j] = maxNum[j];
            }
        }
        return ret;
    }
};
