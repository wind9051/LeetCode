class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int x = 0;
        vector<bool> ret;
        for (int & n : nums) {
            x = ((x << 1) + n) % 5;
            ret.push_back(x == 0);
        }
        return ret;
    }
};
/*
    Bit, 位元
*/
