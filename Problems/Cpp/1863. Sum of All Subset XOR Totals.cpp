class Solution {
public:
    int sum = 0;
    void dfs(int n, int L, int XOR, vector<int> & nums) {
        if (n == L) {
            sum += XOR;
            return ;
        }
        dfs(n+1, L, XOR, nums);
        dfs(n+1, L, XOR^nums[n], nums);
    }
    
    int subsetXORSum(vector<int>& nums) {
        sum = 0;
        dfs(0, nums.size(), 0, nums);
        return sum;
    }
    
};
/*
    DFS, Subset, Bit, 位元, 子集
*/
