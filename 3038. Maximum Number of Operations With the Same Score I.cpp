class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int L = 0, ret = 0;
        int prev = nums[0] + nums[1];
        while (L < nums.size())
        {
            if (nums[L]+nums[L+1] == prev) ret++;
            else break;
            L += 2;
        }
        return ret;
    }
};
