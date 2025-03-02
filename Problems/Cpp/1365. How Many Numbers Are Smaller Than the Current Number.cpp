class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int hash[105] = {0};
        for (int n : nums) hash[n] ++;
        
        int pre[105] = {0};
        for (int i = 1; i <= 100; i++) pre[i] = pre[i-1] + hash[i-1];
        
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = pre[nums[i]];
        }
        return nums;
    }
};
/*
    Prefix, 前綴, Hash, 哈希
*/
