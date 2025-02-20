class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> hash(50, 0); //99999 = 45
        vector<int> DP(100005, 0); //prefix bit sum
        int maxn = 0;
        for (int i = 1; i <= 100000; i++) {
            int now = i % 10 + DP[i / 10];
            DP[i] = now;
        }
        for (int i = lowLimit; i <= highLimit; i++) {
            int now = i % 10 + DP[i / 10];
            hash[now] ++;
        }
        for (auto n : hash) maxn = max(maxn, n);
        return maxn;
    }
};
