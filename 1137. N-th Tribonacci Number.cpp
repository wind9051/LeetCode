/*
    DP
*/
class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) return n;
        
        vector<int> DP(n+1, 1);
        DP[0] = 0;
        for (int i = 3; i <= n; i++) {
            DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
        }
        return DP[n];
    }
};
