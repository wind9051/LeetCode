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
        for (auto [k, v] : Hash)
        {
            if (v == maxCnt) ret += maxCnt;
        }
        return ret;
    }
};
