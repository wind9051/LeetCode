class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int cnt = 1;
        for (int i = 1; i < s.size(); i++, cnt++) {
            if (s[i] != s[i-1]) {
                if (cnt == k) return true;
                cnt = 0;
            }
        }
        
        return (cnt == k);
    }
};
