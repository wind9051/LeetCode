class Solution {
public:
    string reverseOnlyLetters(string s) {
        int L = 0, R = s.size()-1;
        while (L < R) {
            if (!isalpha(s[L])) L++;
            if (!isalpha(s[R])) R--;
            if (isalpha(s[L]) && isalpha(s[R])) swap(s[L++], s[R--]);
        }
        return s;
    }
};
