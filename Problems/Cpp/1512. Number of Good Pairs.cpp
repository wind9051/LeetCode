class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (int n : nums) cnt[n]++;
        
        int sum = 0;
        for (auto [key , val] : cnt) {
            if (val >= 2) sum += val * (val-1) / 2;
        }
        return sum;
    }
};
/*
    Math, 數學 排組
    C(n,2) = n(n−1) / 2
*/
