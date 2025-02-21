class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n+1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i+1] = prefix[i] + nums[i];   
        }
        
        int sum = accumulate(begin(nums), end(nums), 0);
        for (int i = 0; i < n; i++) {
            if (prefix[i] == sum - prefix[i] - nums[i]) return i;
        }
        return -1;
    }
};
