class Solution {
public:
    int maxScore(string s) {
        int L = 0, R = 0;
        for (auto ch : s) if (ch == '1') R++;
        
        int maxn = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == '0') L ++;
            else R--;
            maxn = max(maxn, L+R);
        }
        return maxn;
    }
};

