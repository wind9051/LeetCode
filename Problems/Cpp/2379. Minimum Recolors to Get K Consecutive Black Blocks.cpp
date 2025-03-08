class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int L = 0, R = 0, cnt_w = 0, ans = INT_MAX;
        while (R < blocks.size()) {
            if (blocks[R] == 'W') cnt_w++;
            if (R - L + 1 == k) {
                ans = min(ans, cnt_w);
                if (blocks[L++] == 'W') cnt_w--;
            }
            R++;
        }
        return ans;
    }
};
/*
    Two pointer 雙指針
*/
