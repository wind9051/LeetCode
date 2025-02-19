class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++){
            int start = i - nums[i] - 1;
            nums[i] += nums[i - 1];

            res += nums[i];
            if (start >= 0) res -= nums[start];
        }
        return res;
    }
};
