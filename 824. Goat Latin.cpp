class Solution {
public:
    string vowel = "aeiouAEIOU";
    bool check(char ch) {
        for (char & v : vowel) if (v == ch) return 1;
        return 0;
    }
    
    string toGoatLatin(string sentence) {
        string word, ret = "", sa = "";
        stringstream ss(sentence);
        
        int cnta = 1;
        while (ss >> word) {
            sa += "a";
            if (check(word[0])) word += "ma" + sa;
            else word = word.substr(1) + word[0] + "ma" + sa;
            ret += word;
            ret += ' ';
        }
        ret.pop_back();
        return ret;
    }
};
