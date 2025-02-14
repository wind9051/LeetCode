class Solution {
public:
    int minimumChairs(string s) {
        int ans = 0, now = 0;
        for (auto c : s) {
            if (c == 'E') ans = max(ans, ++now);
            else now--;
        }
        return ans;
    }
};
