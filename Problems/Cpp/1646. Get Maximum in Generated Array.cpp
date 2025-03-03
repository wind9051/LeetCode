class Solution {
public:
    int getMaximumGenerated(int n) {
        if (n < 2) return n;
        
        int maxn = 0;
        vector<int> DP(n+1);
        DP[0] = 0; DP[1] = 1;
        for (int i = 2; i <= n; i++) {
            int x = i/2;
            if (i%2) DP[i] = DP[x] + DP[x+1];
            else DP[i] = DP[x];
            maxn = max(maxn, DP[i]);
        }
        return maxn;
    }
};
/*
    DP
*/
