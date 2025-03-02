class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(begin(nums), end(nums), 0);
        
        int now = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (2 * now == sum - nums[i]) return i;
            now += nums[i];
        }
        return -1;
    }
};
/*
    Prefix, 前綴
*/
