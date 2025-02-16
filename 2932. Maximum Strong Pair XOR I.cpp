class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j <= i; j++) {
                if (abs(nums[i] - nums[j]) <= min(nums[i], nums[j])) 
                    res = max(res, nums[i] ^ nums[j]);
            }
        }
        return res;
    }
};
