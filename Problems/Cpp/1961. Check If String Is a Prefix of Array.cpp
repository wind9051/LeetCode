class Solution {
public:
    bool isPrefixString(string s, vector<string>& W) {
        int now = 0;
        for (int i = 0; i < W.size(); i++) {
            for (int j = 0; j < W[i].size(); j++) {
                if (s[now++] != W[i][j]) return 0;
            }
            if (now == s.size()) return 1;
        }
        return 0;
    }
};
