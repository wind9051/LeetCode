class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size(),minn = INT_MAX;;
        for (int s = 0; s < n; ++s) {
            int oor = 0;
            for (int e = s; e < n; ++e) {
                oor |= nums[e];
                if (oor >= k) {
                    minn = min(minn, e-s+1);
                    break;
                }
            }
        }
        if(minn == INT_MAX) return -1;
        return minn;
    }
};
