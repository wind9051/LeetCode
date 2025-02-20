class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> Vis(105, 0);
        for (auto n : nums) Vis[n]++;

        int pairs = 0, leftover = 0;
        for (int i = 0; i <= 100; i++) {
            pairs += Vis[i] / 2;
            leftover += Vis[i] % 2;
        }
        return {pairs, leftover};
    }
};
