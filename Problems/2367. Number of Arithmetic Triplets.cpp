class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        bitset<205> cnt = 0;
        int res = 0;
        for (auto n : nums) {
            if (n >= 2*diff) res += cnt[n-diff] && cnt[n-2*diff];
            cnt[n] = true;
        }
        return res;
    }
};
