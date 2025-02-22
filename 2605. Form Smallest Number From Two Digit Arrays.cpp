/*
    Bit Manipulation
*/
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int mask1 = 0, mask2 = 0;
        for (int i : nums1) mask1 |= 1 << i;
        for (int j : nums2) mask2 |= 1 << j;

        int bit = 0;
        if (mask1 & mask2) {
            while ((k >> bit & 1) == 0) ++bit;
            return bit;
        }

        int bit1 = 0, bit2 = 0;
        while ((mask1 >> bit1 & 1) == 0) ++bit1;
        while ((mask2 >> bit2 & 1) == 0) ++bit2;
        return min(bit1 * 10 + bit2, bit2 * 10 + bit1);
    }
};
