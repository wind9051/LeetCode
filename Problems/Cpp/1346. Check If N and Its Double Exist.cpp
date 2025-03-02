class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> hash;
        for (auto &n : arr) {
            if (hash.count(n*2) || (hash.count(n/2) && n%2 == 0)) return true;
            hash.insert(n);
        }
        return false;
    }
};
/*
    Two sum
    Hash, 哈希
*/
