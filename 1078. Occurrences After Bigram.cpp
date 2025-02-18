class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> words;
        string str;
        stringstream ss(text);
        while (ss >> str) words.push_back(str);
        
        vector<string> ret;
        for (int i = 0; i < words.size()-2; i++) {
            if (words[i] == first && words[i+1] == second) ret.push_back(words[i+2]);
        }
        return ret;
    }
};
