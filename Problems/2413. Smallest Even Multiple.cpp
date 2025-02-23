class Solution {
public:
    /*
    int Lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
    */
    int smallestEvenMultiple(int n) {
        return lcm(2, n);
    }
};
