/*
    Bit Manipulation
    trailing zero bit[0] = 0
*/
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int trailZero = 0;
        for (auto & n : nums) {
            if ((n & 1) == 0) trailZero++;
        }
        return (trailZero >= 2);
    }
};
