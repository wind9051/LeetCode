class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i+1 < nums.size(); i++) {
            if (nums[i] == nums[i+1]) { 
                nums[i] = 2*nums[i]; 
                nums[i+1] = 0;
            }
        }
        int L = 0;
        for (auto n : nums) {
            if (n) nums[L++] = n;
        }
        while (L < nums.size()) nums[L++] = 0;
        
        return nums;
    }
};
