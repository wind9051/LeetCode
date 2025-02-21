class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ret(s.size());

        for (int i = 0, cnt = -1e4; i < n; i++) {
            if (s[i] == c) cnt = i;
            ret[i] = i - cnt;
        }

        for (int i = n-1, cnt = 1e4; i >= 0; i--) {
            if (s[i] == c) cnt = i;
            ret[i] = min(ret[i], cnt - i);
        }
        return ret;
    }
};
