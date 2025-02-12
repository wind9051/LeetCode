class Solution {
public:
    bool isSubstringPresent(string s) {
        unordered_set<string> Hash;
        int n = s.size();
        
        for (int i = 1; i < s.size(); i++) {
            string sub = "";
            sub += s[i-1];
            sub += s[i]; 
            Hash.insert(sub);
        }

        reverse(s.begin(), s.end());
        for (int i = 1; i < s.size(); i++) {
            string sub = "";
            sub += s[i-1];
            sub += s[i]; 
            if (Hash.count(sub)) return true;
        }
        return false;
    }
};
