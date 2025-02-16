class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt = 0, now = 0;
        for (auto ch : moves) {
            if (ch == '_') cnt++;
            else if (ch == 'R') now++;
            else now--;
        }
        return (cnt + abs(now));
    }
};
