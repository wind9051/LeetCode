class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxn = 0, sum;
        for (int i = 0; i < accounts.size(); i++) {
            sum = accumulate(begin(accounts[i]), end(accounts[i]), 0);
            maxn = max(maxn, sum);
        }
        return maxn;
    }
};
