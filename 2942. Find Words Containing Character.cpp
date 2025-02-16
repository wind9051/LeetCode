class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ret;
        for (int i = 0; i < words.size(); i++) {
            if (std::string::npos != words[i].find(x)) ret.push_back(i);
        }
        return ret;
    }
};
