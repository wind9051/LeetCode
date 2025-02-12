class Solution {
public:
    int encrypt(int x) {
        int maxn = 0, mul = 0;
        while (x) {
            maxn = max(maxn, x%10);
            x /= 10;
            mul++;
        }
        int num = 0;
        while (mul--) {
            num = num*10+ maxn;
        }
        return num;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto n : nums) {
            sum += encrypt(n);
        }
        return sum;
    }
};
