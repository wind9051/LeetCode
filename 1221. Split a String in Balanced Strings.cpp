class Solution {
public:
    int balancedStringSplit(string s) {
        int now = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            now += s[i] == 'L' ? 1 : -1;
            if (now == 0) cnt ++;
        }
        return cnt;
    }
};
