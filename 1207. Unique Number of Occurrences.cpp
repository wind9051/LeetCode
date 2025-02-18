class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;
        for (auto i = 0; i < arr.size(); i++) hash[arr[i]]++;
        
        unordered_set<int> unique;
        for (auto [k, v] : hash) {
            if (unique.find(v) != unique.end()) return false;
            else unique.insert(v);
        }
        return true;
    }
};
