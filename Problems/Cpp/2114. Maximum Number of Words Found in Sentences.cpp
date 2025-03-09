class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxn = 0;
        string word;
        for (string & S : sentences) {
            int cnt = 1;
            for (char & ch : S) if (ch == ' ') cnt++;
            
            maxn = max(maxn, cnt);
        }
        return maxn;
    }
};
/*
    String 字串
*/
