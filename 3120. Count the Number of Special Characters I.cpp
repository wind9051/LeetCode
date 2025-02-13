//bitset
class Solution {
public:
    int numberOfSpecialChars(string word) {
        bitset<26> lo = {}, up = {};
        for (char ch : word)
            if (islower(ch)) lo[ch-'a'] = true;
            else up[ch-'A'] = true;
        return (lo & up).count();
    }
};
