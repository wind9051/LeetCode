class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();

        vector<int> Prefix(n+1, 0);
        for (int i = 1; i <= n; i++) Prefix[i] = nums[i-1] + Prefix[i-1];

    
        int minn = 1e6;
        for (int L = 0; L < n; L++) {
            for (int R = min(L+r-1, n-1); R >= L+l-1 && R >= 0; R--) {
                int sum = Prefix[R+1] - Prefix[L];
                if (sum > 0) minn = min(minn, sum);
            }
        }
        return minn == 1e6 ? -1 : minn;
    }
};
/*
    Two pointer, 雙指針
*/
