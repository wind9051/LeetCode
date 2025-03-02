class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ret(arr.size());
        int maxn = -1;
        for (int i = arr.size()-1; i >= 0; i--) {
            ret[i] = maxn;
            maxn = max(maxn, arr[i]);
        }
        return ret;
    }
};
