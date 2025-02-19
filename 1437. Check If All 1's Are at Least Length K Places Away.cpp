class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pre = -1e5;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                if (i - pre < k) return 0;
                else pre = i+1;
            } 
        }
        return 1;
    }
};
