class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxT = events[0][1], res = events[0][0];

        for (int i = 1; i < events.size(); i++) {
            int nowT = events[i][1] - events[i - 1][1];
            if (nowT > maxT || (nowT == maxT && events[i][0] < res)) {
                maxT = nowT;
                res = events[i][0];
            }
        }
        return res;
    }
};
