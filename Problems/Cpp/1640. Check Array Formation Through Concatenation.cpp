class Solution {
public:
    bool canFormArray(vector<int> &arr, vector<vector<int>> &pieces) {
        unordered_map<int, int> index;
        for (int i = 0; i < pieces.size(); i++) {
            index[pieces[i][0]] = i;
        }

        int L = 0;
        while (L < arr.size()) {
            auto it = index.find(arr[L]);
            if (it == index.end()) return false;

            for (int x : pieces[it->second]) {
                if (arr[L++] != x) return false;
            }
        }   
        return true;
    }
};
/*
    Hash, 哈希
*/
