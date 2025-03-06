class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int now = 0;
        int maxL = 0, incL = 0, decL = 0;
        for (auto n : nums) {
            if (now < n) incL++, decL = 1;
            else if (now > n) decL++, incL = 1;
            else incL = decL = 1;

            now = n;
            maxL = max(maxL, max(incL, decL));
        }
        return maxL;
    }
};
/*
    LIS
*/
