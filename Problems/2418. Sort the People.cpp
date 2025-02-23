//sort(idx.begin(), idx.end(), [&](int i, int j) { return heights[j] < heights[i]; });
class Solution {
public:
    static bool cmp (int & a, int & b) {
        return a > b;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        unordered_map<int, string> Hash;

        for (int i = 0; i < n; i++) {
            Hash[heights[i]] = names[i];
        }

        sort(heights.begin(), heights.end(), cmp);

        vector<string> sorted_names(n);
        for (int i = 0; i < n; i++) {
            sorted_names[i] = Hash[heights[i]];
        }

        return sorted_names;
    }
};
