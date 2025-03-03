class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> prefix(55, 0);
        for (auto V : ranges) {
            prefix[V[0]]++;
            prefix[V[1]+1]--;
        }
        for (int i = 1; i <= 50; i++) prefix[i] += prefix[i-1];
        
        for (int i = left; i <= right; i++) {
            if (prefix[i] == 0) return false;
        }
        return true;
    }
};
/*
    https://leetcode.cn/problems/check-if-all-the-integers-in-a-range-are-covered/solutions/891275/yi-ti-san-jie-bao-li-you-hua-chai-fen-by-w7xv/
    Prefix, 前綴 差分
*/
