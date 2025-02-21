class Solution {
public:
    int countAsterisks(string s) {
        bool bars = 1;
        int cnt = 0;
        for (auto ch : s) {
            if (ch == '|') bars ^= 1;
            if (bars && ch == '*') cnt++;
        }
        return cnt;
    }
};
