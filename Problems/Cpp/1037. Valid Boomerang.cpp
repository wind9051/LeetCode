class Solution {
public:
    
    bool isBoomerang(vector<vector<int>>& points) {
        // (y2-y1) / (x2-x1) == (y3−y1)/(x3−x1)
        // (y2-y1) * (x3−x1) == (y3−y1) * (x2-x1)
        int x1 , x2 , x3 ,y1, y2, y3;
        x1 = points[0][0]; x2 = points[1][0]; x3 = points[2][0];
        y1 = points[0][1]; y2 = points[1][1]; y3 = points[2][1]; 

        int LHS = (y2 - y1) * (x3 - x1);
        int RHS = (y3 - y1) * (x2 - x1);
        return LHS != RHS;
    }
};
/*
    Math, slope, 數學, 斜率
*/
