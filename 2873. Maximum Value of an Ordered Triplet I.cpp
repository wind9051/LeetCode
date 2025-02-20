class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long result = 0;
        int n = nums.size();

        vector<int> l_max(n, 0), r_max(n, 0);
        for (int i = 1; i < n; i++){
            l_max[i] = max(l_max[i - 1], nums[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--){
            r_max[i] = max(r_max[i + 1], nums[i + 1]);
        }

        for (int i = 1; i < n - 1; i++){
            long long res = (long long) (l_max[i] - nums[i]) < 0 ? 0 : (long long) (l_max[i] - nums[i]) * r_max[i];
            result = max(result, res);
        }
        return result;
    }
};
