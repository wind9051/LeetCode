class Solution {
public:
    static bool cmp(int x, int y) { 
        return abs(x) > abs(y); 
    }
    
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), cmp);
        
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0 && k > 0) {
                nums[i] = -nums[i];
                k--;
            }
            sum += nums[i];
        }
        if (k%2) sum -= 2 * nums.back();
        return sum;
    }
};
