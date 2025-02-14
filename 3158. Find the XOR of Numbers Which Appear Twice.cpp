class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> Hash;
        for (auto n : nums) Hash[n]++;
        for (auto v : Hash) {
            if (v.second == 2) ans ^= v.first;
        }
        return ans;    
    }
};
