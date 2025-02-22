class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int now = 0;
        for (auto s : commands) {
            if (s == "LEFT") now--;
            if (s == "RIGHT") now++;
            if (s == "UP") now -= n;
            if (s == "DOWN") now += n;
        }
        return now;
    }
};
