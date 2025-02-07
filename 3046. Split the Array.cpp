class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> Hash;
        for (auto n : nums)
        {
            Hash[n]++;
        }
        for (auto v : Hash)
        {
            if (v.second > 2) return false;
        }
        return true;
    }
};
