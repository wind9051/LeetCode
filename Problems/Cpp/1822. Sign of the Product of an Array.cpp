class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negN = 0;
        for (auto & n : nums) {
            if (n == 0) return 0;
            if (n < 0) negN++;
        }
        if (negN%2 == 0) return 1;
        else return -1;
    }
};
/*
    Math, 數學
*/
