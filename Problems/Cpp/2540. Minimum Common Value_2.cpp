class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for (int n : nums2) {
            auto lb = lower_bound(begin(nums1), end(nums1), n);
            if (lb != end(nums1) && nums1[lb-begin(nums1)] == n) return n;
        }
        return -1;
    }
};
/*
    BS, 二元搜尋, lower_bound
*/
