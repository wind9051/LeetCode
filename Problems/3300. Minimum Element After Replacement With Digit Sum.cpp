//nums with the sum of its digits.
class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn = 1e4;
        for (auto n : nums) {
            int now = n, sum = 0;
            while (now) {
                sum += now % 10;
                now /= 10;
            }
            minn = min(minn, sum);
        }
        return minn;
    }
};
