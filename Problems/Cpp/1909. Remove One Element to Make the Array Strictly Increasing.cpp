class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        vector<int> DP;
        for (int n : nums) {
            auto it = lower_bound(begin(DP), end(DP), n);
            if (it == end(DP)) DP.push_back(n);
            else (*it) = n;
        }
        return DP.size() >= nums.size()-1;
    }
};
/*
    DP, LIS
*/
