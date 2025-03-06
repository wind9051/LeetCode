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
/*
    Bit, 位元
    trailing zero bit[0] = 0
*/
