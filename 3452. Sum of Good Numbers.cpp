class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ret = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i-k >= 0 && nums[i] <= nums[i-k]) continue;
            if (i+k < nums.size() && nums[i] <= nums[i+k]) continue;
            
            ret += nums[i];
        }
        return ret;
    }
};
