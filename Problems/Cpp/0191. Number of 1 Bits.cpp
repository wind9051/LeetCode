class Solution {
public:
    int hammingWeight(int n) {
        int cnt1 = 0;
        while (n) {
            cnt1 += n & 1;
            n >>= 1;
        }
        return cnt1;
    }
};
/*
    Bit 位元 漢明
*/
