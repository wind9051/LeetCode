/*
    Math, Induction, DP
*/
class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> DP(1005, 0);
        DP[1] = 0;
        DP[2] = 1;
        for (int i = 3; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                if (i % j == 0 && !DP[i - j]) { 
                    DP[i] = true;
                    break;
                }
            }
        }
        return DP[n];
        //return n % 2 == 0; 
    }
};
