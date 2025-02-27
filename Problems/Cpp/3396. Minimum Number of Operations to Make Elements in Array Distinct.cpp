class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> Hash;
        int ans = 0;
        for (int i = nums.size()-1; i >= 0; i--) {
            if (Hash.count(nums[i])) {
                return i / 3 + 1;
            }
            Hash.insert(nums[i]);
        }
        return 0;
    }
};
/*
    https://leetcode.cn/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/solutions/3027035/on-yi-ci-bian-li-jian-ji-xie-fa-pythonja-jgox/
    Math, 數學
*/
