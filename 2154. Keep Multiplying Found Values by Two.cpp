/*
    Bit Manipulation
*/
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bitset<1005> vis = 0;
        for (auto& i : nums) vis[i] = 1;

        int ans = original;
        while (ans <= 1000 && vis[ans]) ans *= 2;
        return ans;
    }
};
