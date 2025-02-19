class Solution {
public:
    static bool cmp (int & x, int & y) {
        return x > y;
    }

    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        
        return (nums[0] - 1) * (nums[1] - 1);
    }
};
