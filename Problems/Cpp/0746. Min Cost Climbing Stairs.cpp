class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        vector<int> DP(n+1, 0);
        for (int i = 2; i <= n; i++) {
            DP[i] = min(DP[i-1]+cost[i-1], DP[i-2]+cost[i-2]);
        }
        return DP[n];
    }
};
/*
    DP, 樓梯
    DP[i] = 到達i層的最小花費
    [0, 0, 10, 15, 20]
           [0,  0, 10, 15]
*/
