class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minn = 0;
        vector<int> pre(nums.size()+1, 0);
        for (int i = 0; i < nums.size(); i++) {
            pre[i+1] = pre[i] + nums[i];
            minn = min(minn, pre[i+1]);
        }
        return abs(minn) + 1;
    }
};
