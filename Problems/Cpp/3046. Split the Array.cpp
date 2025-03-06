class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> Hash;
        for (auto n : nums) Hash[n]++;

        for (auto [k, v] : Hash) {
            if (v > 2) return false;
        }
        return true;
    }
};

/*
    Hash, 哈希
*/
