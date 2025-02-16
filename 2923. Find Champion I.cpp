class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) 
        {
            int cnt = accumulate(begin(grid[i]), end(grid[i]), 0);
            if (cnt == grid.size()-1) return i;
        }
        return -1;
    }
};
