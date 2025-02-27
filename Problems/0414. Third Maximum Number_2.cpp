class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long maxn1 = LONG_MIN, maxn2 = LONG_MIN, maxn3 = LONG_MIN;
        for (int n : nums) {
            if (n == maxn1 || n == maxn2 || n == maxn3) continue;
            if (n > maxn1) {
                maxn3 = maxn2;
                maxn2 = maxn1;
                maxn1 = n;
            }
            else if (n > maxn2) {
                maxn3 = maxn2;
                maxn2 = n;
            }
            else if (n > maxn3) {
                maxn3 = n;
            }
        }
        return maxn3 == LONG_MIN ? maxn1 : maxn3;
    }
};
