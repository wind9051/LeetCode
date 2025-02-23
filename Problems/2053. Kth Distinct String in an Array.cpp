class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> hash;
        for (auto & s : arr) hash[s]++;
        
        for (auto & s : arr) {
            if (hash[s] == 1 && --k == 0) return s;
        }
        return "";
    }
};
