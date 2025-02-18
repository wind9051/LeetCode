//https://leetcode.cn/problems/distribute-candies-to-people/solutions/2798970/liang-chong-fang-fa-mo-ni-shu-xue-gong-s-g0jk/
/*
    Math
*/
class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        /*
            P = people, C = candies

            1+2+3+...+n = n(n+1)/2 <= C
            n^2 + n - 2C = 0
            n = (-1 +-sqrt(1+8C))/2

            (i+1) + (P+i+1) + (2P+i+1) +...+ ((R-1)P+i+1) = R(R-1)/2*P + R(i+1)
        */
        int n = (-1 + sqrt(1 + 8.0 * C) ) / 2;
        //Round, Extra
        int R = m / n, E = m % n;

        vector<int> ret(P, 0);
        for (int i = 0; i < P; i++) {
            ret[i] = R*(R-1)/2*P + R*(i+1); //R-1 Round
            if (i < E) ret[i] += R * P + i + 1; //R Round
        }
        ret[E] += C - n * (n + 1) / 2;
        return ret;
    }
};
