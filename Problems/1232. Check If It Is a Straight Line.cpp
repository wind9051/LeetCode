
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x0 = coordinates[0][0], dx = coordinates[1][0] - coordinates[0][0];
        int y0 = coordinates[0][1] , dy = coordinates[1][1] - coordinates[0][1];
        for (auto i = 1; i < coordinates.size(); i++) {
            if (dx * (coordinates[i][1] - y0) != (coordinates[i][0] - x0) * dy) return false;
        }
        return true;
    }
};
/*
    math, 數學, 斜率
    m = dy/dx
*/
