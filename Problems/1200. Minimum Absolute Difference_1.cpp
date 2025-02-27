class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> ret;
        int minn = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            minn = min(minn, arr[i] - arr[i-1]);
        }
        for (int i = 1; i < arr.size(); i++) {
            if (minn == arr[i] - arr[i-1]) ret.push_back({arr[i-1], arr[i]});
        }
        return ret;
    }
};
