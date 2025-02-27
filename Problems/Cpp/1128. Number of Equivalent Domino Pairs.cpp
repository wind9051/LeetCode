class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> hash;
        int ret = 0;
        for (auto & v : dominoes) {
            if (v[0] > v[1]) swap(v[0], v[1]);
            ret += hash[{v[0], v[1]}]++;
        }
        return ret;
    }
};
/*
    Hash, 哈希
*/
