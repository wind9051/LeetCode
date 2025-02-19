/*
    https://leetcode.cn/problems/count-the-number-of-incremovable-subarrays-i/
    Star

    Two pointer
    strictly increasing

    all
    [1, 2, 3, 4] all  -> n(n+1)/2
    [1],[2],[3],[4], [1,2],[2,3],[3,4], [1,2,3],[2,3,4], [1,2,3,4]

    Not all
    [0, n-1], [1, n-1], ... , [i, n-1], [i+1, n-1] -> i+2
    [1, 3, 4, 1, 2] i=2 [4]
    [3, 4] = [1, 2] -> [1, 3, 4]
    [2, 4] = [4, 1, 2] -> [1, 3]
    [1, 4] = [3, 4, 1, 2] -> [1]
    [0, 4] = [1, 3, 4, 1, 2] -> []
*/
class Solution {
public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int L = 0;
        while (L < n-1 && nums[L] < nums[L+1]) L++;

        if (L == n-1) return n * (n + 1) / 2;

        int ans = L + 2; 
        cout<<"ans"<<ans<<endl;
        for (int R = n-1;  R == n-1 || nums[R] < nums[R+1]; R--) {
            while (L >= 0 && nums[L] >= nums[R]) L--;
            ans += L + 2;
        }
        return ans;
    }
};
