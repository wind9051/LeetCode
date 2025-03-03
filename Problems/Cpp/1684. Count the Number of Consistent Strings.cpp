class Solution {
public:
    int countConsistentStrings(string& allowed, vector<string>& words) {
        bitset<26> Hash;
        for (char ch : allowed) Hash[ch-'a'] = 1;
        
        int cnt = 0;
        for (string& w: words) {
            bool flag = 1;
            for (char c: w) {
                if (!Hash[c-'a']) {
                    flag = 0;
                    break;
                }
            }
            if (flag) cnt++;
        }
        return cnt;
    }
};
/*
    Hash, 哈希
*/
