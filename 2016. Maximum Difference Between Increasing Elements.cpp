class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int DP = nums[0], maxn = 0;
        for (int i = 1; i < nums.size(); i++) {
            maxn = max(maxn, nums[i] - DP);
            DP = min(DP, nums[i]);
        }
        return maxn > 0 ? maxn : -1;
    }
};
