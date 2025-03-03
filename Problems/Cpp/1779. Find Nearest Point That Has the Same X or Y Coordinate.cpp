class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int minL = INT_MAX, now = -1;
        for (int i = 0; i < points.size(); i++) {
            if (points[i][0] == x || points[i][1] == y) {
                int des = ManhattanDstance(x, points[i][0], y, points[i][1]);
                if (minL > des) {
                    minL = des;
                    now = i;
                }
            }
        }
        return now;
    }
private:
    int ManhattanDstance(int & x1, int & x2, int & y1, int & y2) {
        return abs(x1 - x2) + abs(y1 - y2);
    }
};
/*
    Math, 數學 座標, 曼哈頓
*/
