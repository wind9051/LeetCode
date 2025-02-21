class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> Hash;
        for (auto n : deck) Hash[n]++;

        int group = Hash[deck[0]];
        for (auto [k, v] : Hash) group = gcd(group, v);
        
        return group >= 2;
    }
};
