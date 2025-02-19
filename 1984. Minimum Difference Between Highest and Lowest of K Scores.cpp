class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int minn = INT_MAX;
        for (int i = k-1; i < nums.size(); i++) {
            minn = min(minn, nums[i] - nums[i-k+1]);
        }
        return minn;
    }
};
