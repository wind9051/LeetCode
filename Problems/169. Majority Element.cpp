class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int now = nums[0], cnt = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (now == nums[i]) cnt ++;
            else cnt --;
            if (cnt == 0) {
                cnt ++;
                now = nums[i];
            }
        }
        return now;
    }
};
