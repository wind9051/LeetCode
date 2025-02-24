class Solution {
public:
    int countLargestGroup(int n) {
        int maxn = 0;
        //the sum of its digits.
        vector<int> DP(n+1);
        vector<int> hash(37);//9999=36
        for (int i = 1; i <= n; i++) {
            DP[i] = DP[i/10] + i%10;
            maxn = max(maxn, ++hash[DP[i]]);
        }
        int cnt = 0;
        for (int i = 1; i <= 36; i++) {
            if (maxn == hash[i]) cnt++;
        }
        return cnt;
    }
};
