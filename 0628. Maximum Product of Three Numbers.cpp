class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size() - 1;
        int ans1 = nums[0] * nums[1] * nums[n];
        int ans2 = nums[n-2] * nums[n-1] * nums[n];
        return max(ans1, ans2);
    }
};
/*
  class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        for (int num : nums) {
            if (num <= min1) {
                min2=min1;
                min1=num;
            }
            else if (num <= min2) {
                min2=num;
            }
            if (num >= max1) {
                max3=max2;
                max2=max1;
                max1=num;
            }
            else if (num >= max2) {
                max3=max2;
                max2=num;
            }
            else if (num >= max3) {
                max3=num;
            }
        }
        return max(max1*max2*max3, min1*min2*max1);
    }
};
*/

