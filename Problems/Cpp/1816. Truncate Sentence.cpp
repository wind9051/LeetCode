class Solution {
public:
    string truncateSentence(string s, int k) {
        s += ' ';
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') cnt++;
            if (cnt == k) return s.substr(0, i);
        }
        return {};
    }
};
