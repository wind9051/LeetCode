class Solution {
public:
    int maxPower(string s) {
        char now = s[0];
        int cnt = 0, maxn = 0;
        for (char ch : s) {
            if (ch == now) cnt ++;
            else {
                now = ch;
                maxn = max(maxn, cnt);
                cnt = 1;
            }
        }
        maxn = max(maxn, cnt);
        return maxn;
    }
};
