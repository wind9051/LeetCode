class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int ans = 0, pre_cnt = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt++;
            if (i == nums.size() - 1 || nums[i] >= nums[i + 1]) {
                if (cnt / 2 >= k || min(pre_cnt, cnt) >= k) return true;
                ans = max({ans, cnt / 2, min(pre_cnt, cnt)});
                pre_cnt = cnt;
                cnt = 0;
            }
        }
        return ans >= k;
    }
};
