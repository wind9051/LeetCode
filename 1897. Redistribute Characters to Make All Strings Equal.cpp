class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int> cnt(26, 0);
        for (string str : words) {
            for (char ch : str) {
                cnt[ch-'a']++;
            }
        }
        for (int n : cnt) {
            if (n % words.size()) return 0;
        }
        return 1;
    }
};
