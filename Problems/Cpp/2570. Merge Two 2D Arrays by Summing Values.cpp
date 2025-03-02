class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> Hash;
        for (auto v : nums1) Hash[v[0]] += v[1];
        for (auto v : nums2) Hash[v[0]] += v[1];

        vector<vector<int>> ret;
        for (auto [k, v] : Hash) ret.push_back({k, v});

        return ret;
    }
};
/*
    Hash, 哈希
*/
