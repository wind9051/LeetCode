class Solution {
public:
    string reversePrefix(string word, char ch) {
        string rev = "";
        int now = word.find(ch);
        for (int i = now; i >= 0; i--) rev += word[i];
        for (int i = now+1; i < word.size(); i++) rev += word[i];
        return rev;
    }
};
