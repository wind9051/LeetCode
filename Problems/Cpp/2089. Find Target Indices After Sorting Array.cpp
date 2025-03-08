class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int L = 0, cntT = 0;
        for (auto &n : nums) {
            if (n == target) cntT++;
            else if (n < target) L++;
        }
        vector<int> res;
        while (cntT--) res.push_back(L++);
        return res;
    }
};
