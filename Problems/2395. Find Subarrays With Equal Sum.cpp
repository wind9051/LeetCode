class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> Hash;
        for (int i = 1; i < nums.size(); ++i) {
            int sum = nums[i-1]+nums[i];
            if (Hash.count(sum)) return true;
            Hash.insert(sum);
        }
        return false;
    }
};
