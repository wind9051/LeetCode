class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int minn = nums[0];
        for (auto n : nums) {
            if (abs(n) < abs(minn) || abs(n) == abs(minn) && n > minn) {
                minn = n;
            }
        }
        return minn;
    }
};
