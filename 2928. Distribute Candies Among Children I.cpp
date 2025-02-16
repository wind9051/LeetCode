class Solution {
public:
    int distributeCandies(int n, int limit) {
        if (n > limit * 3) return 0;
        
        int cnt = 0;
        //i = a distribute i candies
        for (int i = max(0, n - limit * 2); i <= min(n, limit); i++) {
            //remain = b+c distribute n - i candies
            int remain = n - i; 
            int maxCandies = min(remain, limit);
            int minCandies = max(0, remain - limit);
            cnt += maxCandies - minCandies + 1;
        }
        return cnt;
    }
};
