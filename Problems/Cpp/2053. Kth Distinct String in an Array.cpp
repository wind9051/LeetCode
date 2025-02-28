class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> Hash;
        for (const string & s : arr) Hash[s]++;
        
        for (const string & s: arr){
            if (Hash[s] == 1) {
                if (--k == 0) return s;
            }
        }
        return "";
    }
};
/*
    Hash, 哈希
*/
