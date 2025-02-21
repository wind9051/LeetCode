class Solution {
public:
    int commonFactors(int a, int b) {
        int Gcd = gcd(a, b);

        int cnt = 0;
        for (int i = 1; i <= Gcd; i++) {
            if (Gcd % i == 0) {
                cnt ++;
            }
        }
        return cnt;
    }
};
