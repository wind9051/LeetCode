class Solution {
public:
    bool check(vector<int>& nums) {
        nums.emplace_back(nums[0]);
        int cnt = 0;
        for (auto i = 0; i < nums.size()-1; i++) {
            if (nums[i] > nums[i+1]) cnt++;
        }
        return cnt <= 1;
    }
};
