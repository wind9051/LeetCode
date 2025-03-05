class Solution {
public:
    long long coloredCells(int n) {
        long long sum = (long long)2 * n * n - 2 * n + 1;
        return sum;
    }
};
/*
    Math, 數學, 等差
    1
    1+4
    1+4+8
    1+4+8+12

    1 + 4 (0+1+2+3)
    1 + 4 * (n-1)(n)/2
    1 + 2n^2 -2n
  */
