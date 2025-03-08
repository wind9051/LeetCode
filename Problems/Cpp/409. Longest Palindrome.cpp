class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hash;
        for (auto ch : s) hash[ch]++;

        int len = 0, odd = 0;
        for (auto [c, n] : hash) {
            if (n % 2) odd = 1;
            len += n / 2 * 2;
        }
        return len + odd;
    }
};
/*
    String, 字串 回文
*/
