class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rec) {
        int maxN = 0, ans = 0;
        for (int i = 0; i < rec.size(); i++) {
            int val = min(rec[i][0], rec[i][1]);
            if (val > maxN) {
                maxN = val; 
                ans = 1;
            }
            else if (maxN == val) ans++;
        }
        return ans;
    }
};
/*
    Math, 幾何 矩形
*/
