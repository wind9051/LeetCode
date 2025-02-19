/*
    Matrix
*/
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto & r : grid) {
            sort(begin(r), end(r));
        }
        
        int ret = 0;
        for (int i = 0; i < grid[0].size(); i++) {
            int maxRow = 0;
            for (int j = 0; j < grid.size(); j++) {
                maxRow = max(maxRow, grid[j][i]);
            }
            ret += maxRow;
        }
        return ret;
    }
};
