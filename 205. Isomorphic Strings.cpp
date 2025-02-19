class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map_s;
        unordered_map<char,char> map_t;

        for (int i = 0; i < s.size(); i++) {
            if ((map_s.count(s[i]) && map_s[s[i]] != t[i]) || 
                (map_t.count(t[i]) && map_t[t[i]] != s[i])) {
                return false;
            }
            map_s[s[i]] = t[i];
            map_t[t[i]] = s[i];
        }
        return true;
    }
};
