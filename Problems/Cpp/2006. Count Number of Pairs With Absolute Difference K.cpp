class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt = 0;
        vector<int> dic(105, 0);
        for (auto n : nums) dic[n]++;
        
        for (int i = k+1; i <= 100; i++) {
            cnt += dic[i] * dic[i-k];
        }
        return cnt;
    }
};
/*
    Hash, 哈希, 排組
*/
