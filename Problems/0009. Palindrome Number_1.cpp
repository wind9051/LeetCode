class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        string s = to_string(x);
        int L = 0, R = s.size()-1;
        while (L < R) {
            if (s[L++] != s[R--]) return false;
        }
        return true;
    }
};
/*
    Palindrome, 回文
*/
