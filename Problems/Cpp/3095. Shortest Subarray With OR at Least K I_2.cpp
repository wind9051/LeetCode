class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int temp = 0;
        int minL = INT_MAX;
        int L = 0, R = 0;
        while (R < nums.size()) {
            temp |= nums[R];
            while (L <= R && temp >= k) {
                minL = min(minL, R-L+1);
                L++;

                temp = 0;
                for (int idx = L; idx <= R; idx++) {
                    temp |= nums[idx];
                }
            }
            R++;
        }
        if (minL == INT_MAX) return -1;
        return minL;
    }
};
/*
    Two pointer, Bit, 位元
*/
