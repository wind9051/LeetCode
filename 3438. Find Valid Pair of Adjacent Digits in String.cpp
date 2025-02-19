class Solution {
public:
    string findValidPair(string s) {
        vector<int> Hash(10, 0);
        for (auto ch : s) Hash[ch-'0']++;
        
        for (int i = 1; i < s.size(); i++) {
            int x = s[i]-'0', y = s[i-1]-'0';
            if (x != y && Hash[x] == x && Hash[y] == y) return s.substr(i-1, 2);
        }
        return "";
    }
};
