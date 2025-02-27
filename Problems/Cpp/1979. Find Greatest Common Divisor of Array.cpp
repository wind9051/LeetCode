class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x = *min_element(nums.begin(), nums.end());
        int y = *max_element(nums.begin(), nums.end());
        return __gcd(x, y);
    }
};
/*
    Math, GCD, 數學
*/
