class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> Hash;
        for (const string& str : words1) Hash[str]++;

        for (const string& str : words2) {
            if (Hash[str] < 2) Hash[str]--;
        }

        int cnt = 0;
        for (auto [k, v] : Hash) {
            if (v == 0) cnt++;
        }
        return cnt;
    }
};
/*
    Hash, 哈希
*/
