class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int ret = 0;
        unordered_map<int, int> Hash;
        for (auto h : hours)
        {
            ret += Hash[(24 - h%24) % 24];
            Hash[h%24]++;
        }  
        return ret;
    }
};
/*
    Hash, 哈希
*/
