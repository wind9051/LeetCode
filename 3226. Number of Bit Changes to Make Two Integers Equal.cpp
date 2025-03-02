/*
    Bit Manipulation

    N & K = K
    1101 & 0100 = 0100 (13&4)

    __builtin_popcount(n ^ k);
    整數2bit中1的個數
*/
class Solution {
public:
    static int minChanges(int n, int k) {
        return ((n&k) != k) ? -1 : bitset<20>(n^k).count();
    }
};
