class Solution {
public:
    int sumOfTheDigits(int x) {
        int n = 0;
        while (x) {
            n += x % 10;
            x /= 10;
        }
        return n;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = sumOfTheDigits(x);
        return (x % sum == 0) ? sum : -1;
    }
};
