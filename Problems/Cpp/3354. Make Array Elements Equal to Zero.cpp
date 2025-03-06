class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        for (int i = 1; i < nums.size(); i++)
        {
            leftSum[i] = leftSum[i-1] + nums[i-1];
        }
        for (int i = n-2; i >= 0; i--)
        {
            rightSum[i] = rightSum[i+1] + nums[i+1];
        }

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(!nums[i])
            {
                if (leftSum[i] == rightSum[i])
                {
                    ans += 2;
                }
                else if(abs(leftSum[i] - rightSum[i]) == 1)
                {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};
/*
  presum, math, 前綴, 數學
*/
