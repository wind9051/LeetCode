class Solution {
public:
    int countValidWords(string sentence) {
        int cnt = 0;
        string word;
        stringstream ss(sentence);
        while (getline(ss, word, ' ')) {
            if (check(word)) cnt++;
        }
        return cnt;
    }
    
private:
    bool check(string s) {
        int hyphens = 0;
        if (s.size() == 0) return 0;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) return 0;
            if ((s[i] == '!' || s[i] == '.' || s[i] == ',') && i != s.size()-1) return 0;
            if (s[i] == '-') {
                if (hyphens++ || i == 0 || i == s.size()-1 || !isalpha(s[i-1]) || !isalpha(s[i+1])) return 0;
            }
        }
        return 1;
    }
};
