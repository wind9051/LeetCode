class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefix = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]+1) break;
            prefix += nums[i];
        }
        unordered_set<int> Hash;
        for (auto &n : nums) Hash.insert(n);

        while (Hash.count(prefix) != 0) prefix++;
        
        return prefix;
    }
};
/*
    Hash, 哈希
*/
