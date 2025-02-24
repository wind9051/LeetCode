class Solution {
public:
    static bool cmp(int & x, int & y) {
        return x > y;
    }
    
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        
        int sum = 0;
        for (int & n : nums) sum += n;
        
        int now = 0;
        vector<int> ret;
        for (int & n : nums) {
            ret.push_back(n);
            now += n;
            sum -= n;
            if (now > sum) return ret;
        }
        return {};
    }
};
