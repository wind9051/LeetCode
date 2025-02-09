class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        double ans = 100;
        int L = 0, R = nums.size()-1;
        while (L < R) {
            ans = min(ans, (nums[L] + nums[R]) / 2.0);
            L++;
            R--;
        }
        return ans;
    }
};
