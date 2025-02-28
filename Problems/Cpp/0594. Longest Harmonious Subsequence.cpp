class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int & n : nums) hash[n]++;
        
        int maxn = 0;
        for (auto [k, v] : hash) {
            if (hash.count(k+1)) maxn = max(maxn, hash[k] + hash[k+1]);
        }
        return maxn;
    }
};
/*
    Hash, 哈希
*/
