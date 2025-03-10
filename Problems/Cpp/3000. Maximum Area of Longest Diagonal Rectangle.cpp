
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int maxArea = 0, maxDiag = 0;
        for (int i = 0; i < n; i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];

            int currDiag = l * l + w * w;
            if (currDiag > maxDiag || (currDiag == maxDiag && l * w > maxArea)) {
                maxDiag = currDiag;
                maxArea = l * w;
            }
        }
        return maxArea;
    }
};
/*
  Math, Geometry, 數學, 幾何
*/
