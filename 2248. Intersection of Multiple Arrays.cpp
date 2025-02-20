class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> cnt(1001, 0);
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                cnt[nums[i][j]]++;
            }
        } 
            
        vector<int> res;
        for (int i = 0; i < cnt.size(); i++) {
            if (cnt[i] == nums.size()) res.push_back(i);
        }
        return res;
    }
};
