class Solution {
public:
    string key[3] = {"type", "color", "name"};
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int K = 0;
        for (auto i = 0; i < 3; i++) {
            if (ruleKey == key[i]) K = i;
        }
        
        int cnt = 0;
        for (auto & item : items) {
            if (item[K] == ruleValue) cnt++;
        }
        return cnt;
    }
};
