static const auto io_sync_off = [] {
    ios_base::sync_with_stdio(false);
    return true;
}();

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minn(26, 100);
        for (int i = 0; i < words.size(); i++) {
            vector<int> dic(26);
            for (int j = 0; j < words[i].size(); j++) {
                dic[words[i][j] - 'a'] ++;
            }
            for (int j = 0; j < 26; j++) {
                minn[j] = min(minn[j], dic[j]);
            }
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++) {
            for (int cnt = 0; cnt < minn[i]; cnt++) {
                ans.push_back(string(1, i + 'a'));
            }
        }
        return ans;
    }
};
