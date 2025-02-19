class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ret = abs(nums.front() - nums.back());
        for (int i = 1; i < nums.size(); i++) {
            ret = max(ret, abs(nums[i] - nums[i-1]));
        } 
        return ret;
    }
};
