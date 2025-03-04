class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                ans.push_back({i, j});
            }
        }
        int rC = rCenter, cC = cCenter;
        sort (begin(ans), end(ans), [&](vector<int>& a, vector<int>& b) {
            return (abs(rC - a[0]) + abs(cC - a[1])) < (abs(rC - b[0]) + abs(cC - b[1]));
        });
        return ans;
    }
};
/*
    Matrix, 矩陣Sort_Lambda 
*/
