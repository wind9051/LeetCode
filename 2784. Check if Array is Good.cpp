class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size()-1;

        vector<int> Vis(205, 0);
        for (auto x : nums) Vis[x]++;

        for (int i = 1; i < n; i++) {
            if (Vis[i] == 0) return false;
        }
        if (Vis[n] != 2) return false;
        return true;
    }
};
