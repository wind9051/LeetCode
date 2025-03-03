class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int minL = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) minL = min(minL, abs(i - start));
        }
        return minL;
    }
};
