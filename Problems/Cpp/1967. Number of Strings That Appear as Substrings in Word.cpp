class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;
        for (string substr : patterns) {
            if (word.find(substr) != std::string::npos) cnt++;
        }
        return cnt;
    }
};
