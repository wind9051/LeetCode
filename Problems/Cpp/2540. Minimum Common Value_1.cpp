class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> Hash(begin(nums1), end(nums1));

        for (int n : nums2) {
            if (Hash.contains(n)) {
                return n;
            }
        }
        return -1;
    }
};
/*
    Hash, 哈希, Set
*/
