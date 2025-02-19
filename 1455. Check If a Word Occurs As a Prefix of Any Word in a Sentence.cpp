class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word;
        stringstream ss(sentence);
        
        int cnt = 0;
        while (ss >> word) {
            cnt ++;
            if (searchWord == word.substr(0, searchWord.size())) return cnt;
        }
        return -1;
    }
};
