/*
    Math
    3^19 = 1162261467 
    3^k ∣ 3^19,∀k≤19
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};
