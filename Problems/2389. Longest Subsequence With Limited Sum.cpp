class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(),nums.end());
        
        vector<int> pre_sum(n+1);
        pre_sum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            pre_sum[i] = pre_sum[i-1] + nums[i];    
        }
        
        vector<int> ans(m,0);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pre_sum[j] <= queries[i]) ans[i]++;
                else break;
            }
        }
        return ans;
    }
};
