/*
    Bit manipulation    
*/

class Solution {
public:
    int bitwiseComplement(int n) {
        int bit = 1;
        //11111111...
        while (bit < n) {
            bit = (bit << 1) + 1;
        }
        return n ^ bit;
    }
};
