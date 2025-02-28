class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size();
        int n = nums[0].size();
        if (m*n != r*c) return nums;
        
        vector<vector<int>> ans(r, vector<int>(c, 0));
        for (int i = 0; i < m*n; i++) {
            int org_x = i%n;
            int org_y = i/n;
            int new_x = i%c;
            int new_y = i/c;
            ans[new_y][new_x] = nums[org_y][org_x];
        }
        return ans;
    }
};
/*
    Matrix, 矩陣
*/
