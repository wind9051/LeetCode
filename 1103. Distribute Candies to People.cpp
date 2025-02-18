//https://leetcode.cn/problems/distribute-candies-to-people/solutions/2798970/liang-chong-fang-fa-mo-ni-shu-xue-gong-s-g0jk/
/*
    Math
*/
class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        /*
            1+2+3+...+n = n(n+1)/2 <= C(candies)
            n^2 + n - 2C = 0
            n = (-1 +-sqrt(1+8C))/2

            (i+1) + (n+i+1) + (2n+i+1) +...+ (R-1)n+i+1 = k(k-1)/2n + k(i+1)
        */
        int m = (-1 + sqrt(1 + 8.0 * candies) ) / 2;
        //Round, Extra
        int R = m / n, E = m % n;
        cout<<R<<" "<<E<<" "<<m<<endl;

        vector<int> ret(n, 0);
        for (int i = 0; i < n; i++) {
            ret[i] = R*(R-1)/2*n + R*(i+1); //R-1 Round
            if (i < E) ret[i] += R * n + i + 1; //R Round
        }
        ret[E] += candies - m * (m + 1) / 2;
        return ret;
    }
};
