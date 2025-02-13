class Solution {
public:
    int scoreOfChar(char c) {
        return (c - 'a') + 97;
    }
    int scoreOfString(string s) {
        int ret = 0;
        for (int i = 1; i < s.size(); i++) {
            ret += abs(scoreOfChar(s[i-1]) - scoreOfChar(s[i]));
        }
        return ret;
    }
};
