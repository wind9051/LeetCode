class Solution {
public:
    static bool cmp(int & x, int & y) {
        return x > y;
    }
    
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        
        int totalSum = accumulate(begin(nums), end(nums), 0);
        
        int now = 0;
        vector<int> ret;
        for (int & n : nums) {
            ret.push_back(n);
            now += n;
            totalSum -= n;
            if (now > totalSum) return ret;
        }
        return {};
    }
};
