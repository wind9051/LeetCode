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
