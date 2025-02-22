class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        
        vector<string>ans;
        for (int i = 0, flag = -1; i < groups.size(); i++) {
            if (groups[i] != flag) {
                flag = groups[i];
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
