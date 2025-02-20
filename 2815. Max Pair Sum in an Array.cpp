class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<vector<int>> sum(10);
        for (auto n : nums) {
            int maxn = 0, tmp = n;
            while (tmp) {
                maxn = max(maxn, tmp%10);
                tmp /= 10;
            }
            sum[maxn].push_back(n);
        }
        int ans = -1;
        for (int i = 1; i <= 9; i++) {
            if (sum[i].size() >= 2) {
                sort(rbegin(sum[i]), rend(sum[i]));
                ans = max(ans, sum[i][0] + sum[i][1]);
            }
        }
        return ans;
    }
};
