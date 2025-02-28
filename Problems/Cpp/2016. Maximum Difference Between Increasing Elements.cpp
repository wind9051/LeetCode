class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minN = nums[0], maxN = 0;
        for (int i = 1; i < nums.size(); i++) {
            maxN = max(maxN, nums[i] - minN);
            minN = min(minN, nums[i]);
        }
        return maxN > 0 ? maxN : -1;
    }
};
