/*
    Prefix
*/
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        
        int minn = 200;
        vector<int> left(n);
        for (int i = 0; i < n; i++) {
            minn = min(minn, nums[i]);
            left[i] = minn;
        }

        int right = nums[n-1], res = 200;
        for (int i = n - 2; i > 0; i--) {
            if (left[i-1] < nums[i] && nums[i] > right) {
                res = min(res, left[i-1] + nums[i] + right);
            }
            right = min(right, nums[i]);
        }

        return res < 200 ? res : -1;
    }
};
