class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int l = nums.size();
        
        vector<int> pos(l), ret;
        vector<bool> vis(l, 0);
        for (int i = 0; i < l; i++) pos[i] = i;
        
        sort(pos.begin(), pos.end(), [&](int a, int b) { return nums[a] > nums[b]; });
        //for (auto x : pos) cout<<x<<" ";

        for (int i = 0; i < k; i++) vis[pos[i]] = 1;
        for (int i = 0; i < l; i++) if (vis[i]) ret.push_back(nums[i]);
        
        return ret;
    }
};
/*
    Pointer, 指標 相對指標
*/
