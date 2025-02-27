class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();

        int res = 0;
        vector<int> Prefix(n+1, 0);
        for (int i = 0; i < nums.size(); i++){
            int start = i - nums[i];
            Prefix[i+1] = Prefix[i] + nums[i];
            
            res += Prefix[i+1];
            if (start >= 0) res -= Prefix[start];
        }
        return res;
    }
};
/*
    Prefix, 前綴
*/
