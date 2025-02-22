class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int cnt = 0;
        for (auto word : words) {
            if (word[0] == s[cnt]) cnt++;
            else return false;
        }
        return cnt == s.size();
    }
};
