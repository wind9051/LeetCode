class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ret = "";
        for (char ch : s) {
            if (ch == '(' && cnt++ > 0) ret += '(';
            if (ch == ')' && cnt-- > 1) ret += ')';
        }
        return ret;
    }
};
