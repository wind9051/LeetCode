class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int now = 0;
            while (now < str.size() && now < strs[i].size()) {
                if (str[now] != strs[i][now]) break;
                now ++;
            }
            str = str.substr(0, now);
        }
        return str;
    }
};
/*
    String, 字串, DP, LCP
*/
