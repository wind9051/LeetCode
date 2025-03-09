class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string s : words) {
            int L = 0, R = s.size()-1;
            while (L <= R) {
                if (s[L++] != s[R--]) break;
            }
            if (s[L-1] == s[R+1]) return s;
        }
        return "";
    }
};
/*
    String, 字串 回文
*/
