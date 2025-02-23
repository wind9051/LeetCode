class Solution {
    public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<int> count(1005);

        for (const vector<int>& item : items1) count[item[0]] += item[1];
        for (const vector<int>& item : items2) count[item[0]] += item[1];

        vector<vector<int>> ans;
        for (int i = 1; i <= 1000; ++i) {
            if (count[i]) ans.push_back({i, count[i]});
        }
        return ans;
    }
};
