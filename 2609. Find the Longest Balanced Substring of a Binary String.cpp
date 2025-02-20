/*
    Two pointer
*/
class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int c0 = 0, c1 = 0, res = 0;
        for (auto ch : s) {
            if (ch == '0') {
                c0 = c1 ? 1 : c0 + 1;
                c1 = 0;
            }
            else {
                c1++;;
            }
            res = max(res, 2 * min(c0, c1));
        }
        return res;
    }
};
