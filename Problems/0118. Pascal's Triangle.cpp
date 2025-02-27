class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> DP(numRows);
        for (int i = 0; i < numRows; i++) {
            DP[i].resize(i+1);
            DP[i][0] = 1;
            DP[i][i] = 1;
            for (int j = 1; j < i; j++) {
                DP[i][j] = DP[i-1][j] + DP[i-1][j-1];
            }
        }
        return DP;
    }
};
/*
    DP, Math, Pascal's Triangle, 帕斯卡
    [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
*/
