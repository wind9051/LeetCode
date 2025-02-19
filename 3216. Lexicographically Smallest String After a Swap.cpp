class Solution {
public:
    string getSmallestString(string s) {
        for (int i = 1; i < s.size(); i++) {
            int x = s[i]-'0', y = (s[i-1]-'0');
            
            if (x%2 == y%2) {
                if (x < y) {
                    swap(s[i], s[i-1]);
                    break;
                }
            }
        }
        return s;
    }
};
