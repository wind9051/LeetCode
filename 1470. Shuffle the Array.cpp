class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ret;
        for (int L = 0, R = n; R < nums.size(); L++, R++) {
            ret.push_back(nums[L]);
            ret.push_back(nums[R]);
        }
        return ret;
    }
};
