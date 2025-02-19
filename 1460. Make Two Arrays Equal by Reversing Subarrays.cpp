class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> Hash(1001);
        for (int i = 0; i < arr.size(); i++) {
            Hash[target[i]]++;
            Hash[arr[i]]--;
        }
        
        for (int n : Hash) {
            if (n) return false;
        }
        return true;
    }
};
