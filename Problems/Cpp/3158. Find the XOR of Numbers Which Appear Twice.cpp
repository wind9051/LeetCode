class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> Hash(begin(nums), end(nums));
        int totalSet = 0;
        for (auto n : Hash) totalSet ^= n;
        for (auto n : nums) totalSet ^= n;
        
        return totalSet;    
    }
};
/*
    Bit 位元, Twice
    TotalSet = 1 ^ 2 ^ 3
    Final = (1) ^ 1 ^ 1 ^ (2) ^ 2 ^ (3) ^ 3 = 1
*/
