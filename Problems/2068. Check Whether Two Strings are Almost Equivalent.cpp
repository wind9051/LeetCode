class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> cnt1(26, 0), cnt2(26, 0);
        for (char ch : word1) cnt1[ch-'a']++;
        for (char ch : word2) cnt2[ch-'a']++;
        
        for (int i = 0; i < 26; i ++) {
            if (abs(cnt1[i] - cnt2[i]) > 3) return 0;
        }
        return 1;
    }
};
