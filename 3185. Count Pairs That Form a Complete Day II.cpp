const auto init = []{
    ios::sync_with_stdio(false);
    return true;
}();

class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long ret = 0;
        unordered_map<int, int> Hash;
        for (auto h : hours)
        {
            ret += Hash[(24 - h%24) % 24];
            Hash[h%24]++;
        }  
        return ret;
    }
};
