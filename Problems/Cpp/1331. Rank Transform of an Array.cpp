static const auto io_sync_off = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return true;
}();

class Solution {
public:

    static bool cmp(pair<int, int> &a, pair<int, int> &b) {
        return a.first < b.first;
    }

    vector<int> arrayRankTransform(vector<int>& arr) { 
        vector<pair<int, int>> tmp;

        for (int i = 0; i < arr.size(); i++) {
            tmp.push_back({arr[i], i});
        }
        sort(begin(tmp), end(tmp), cmp);

        vector<int> res(arr.size());
        int preN = INT_MIN;
        int rank = 0;
        for (auto [x, i]: tmp) {
            if (x != preN) rank++;
            res[i] = rank;
            preN = x;
        }
        return res;
    }
};
