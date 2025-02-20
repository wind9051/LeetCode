class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans(2, 0);
        int maxRow = 0, maxCount = 0;
        for (int i = 0; i < mat.size(); i++) {
            int cnt = accumulate(begin(mat[i]), end(mat[i]), 0);
            if (cnt > maxCount) {
                maxCount = cnt;
                maxRow = i;
            }
        }
        return {maxRow, maxCount};
    }
};
