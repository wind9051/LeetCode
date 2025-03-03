class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxN = nums[0], sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] >= nums[i]) {
                maxN = max(maxN, sum);
                sum = 0;
            }
            sum += nums[i];
        }
        maxN = max(maxN, sum);
        return maxN;
    }
};
