class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ret = 0;
        int sum = 0;
        for (auto n : nums)
        {
            sum += n;
            if (!sum) ret++;
        }
        return ret;
    }
};
