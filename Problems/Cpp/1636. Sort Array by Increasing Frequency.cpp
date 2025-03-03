class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b) {
        if (a.second==b.second) return a.first > b.first;
        return a.second < b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        for (int i = 0; i < nums.size(); i++) mp[nums[i]]++;
        
        vector<pair<int,int>> val_freq;
        for (auto m : mp) val_freq.push_back(m);
        
        sort(begin(val_freq), end(val_freq), cmp);
        
        vector<int> ret;
        for (auto [i, f] : val_freq) {
            for (int j = 0; j < f; j++) {
                ret.push_back(i);
            }
        }
        return ret;
    }
};
