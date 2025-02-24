class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul = 1, add = 0;
        while (n) {
            int x = n % 10;
            mul *= x;
            add += x;
            n /= 10;
        }
        return mul - add;
    }
};
