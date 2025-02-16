/*
    Bit Manipulation
*/
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        vector<int> dp(32, 0);
        for (int n : nums) {
            int L = 0;
            while (n > 0) {
                if (n&1) dp[L] += 1;
                L++;
                n = n >> 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            if (dp[i] >= k) ans |= (1 << i);
        }
        return ans;
    }
};
