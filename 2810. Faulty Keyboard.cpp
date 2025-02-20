//DQ https://leetcode.com/problems/faulty-keyboard/solutions/3870361/o-n/
class Solution {
public:
    string finalString(string s) {
        string res = "";
        for (char c : s) {
            if (c == 'i') reverse(res.begin(), res.end());
            else res.push_back(c);
        }
        return res;
    }
};
