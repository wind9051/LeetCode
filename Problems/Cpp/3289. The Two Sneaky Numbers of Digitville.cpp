class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ret;
        bitset<101> Hash;
        for (int n : nums) {
            if (Hash[n]) ret.push_back(n);
            Hash[n] = 1;
        }
        return ret;
    }
};
/*
  Hash, 哈希
*/
