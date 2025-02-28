class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxn = *max_element(nums.begin(), nums.end());
        int minn = *min_element(nums.begin(), nums.end());
        if (maxn - minn > 2*k) return maxn - minn - 2*k;
        return 0;
    }
};
