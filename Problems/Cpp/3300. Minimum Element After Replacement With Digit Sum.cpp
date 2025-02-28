class Solution {
public:
    //sum of its digits
    int digitSum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int minn = 1e4;
        for (auto n : nums) {
            minn = min(minn, digitSum(n));
        }
        return minn;
    }
};
