class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxCnt = 0;
        unordered_map<int, int> Hash;
        for (auto n : nums) 
        {
            Hash[n]++;
            maxCnt = max(maxCnt, Hash[n]);
        }
        int ret = 0;
        for (auto v : Hash)
        {
            if (v.second == maxCnt) ret += maxCnt;
        }
        return ret;
    }
};
