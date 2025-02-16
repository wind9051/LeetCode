class Solution {
public:
    int minimumMoves(string s) {
        int cnt = 0, L = 0;
        while (L < s.size()) {
            if (s[L] == 'O') L++;
            else cnt++, L += 3;
        }
        return cnt;
    }
};
