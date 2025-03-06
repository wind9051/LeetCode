class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<int> Freq(n*n+5, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Freq[grid[i][j]]++;
            }
        }

        vector<int> ans(2, 0);
        for (int i = 1; i <= n*n; i++) {
            if (Freq[i] == 2) ans[0] = i;
            if (Freq[i] == 0) ans[1] = i;
        }
        return ans;
    }
};
/*
    Hash, 哈希
*/
