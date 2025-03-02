class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> hash;
        for (int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }
        int maxn = -1;
        for (auto [k, v] : hash) {
            if (k == v) maxn = max(maxn, v);
        }
        return maxn;
    }
};
/*
    Hash, 哈希
*/
