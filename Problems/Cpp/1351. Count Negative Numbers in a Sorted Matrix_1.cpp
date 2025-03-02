class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;
        for (auto num : grid) {
            int L = 0, R = num.size()-1;
            while (L <= R) {
                int M = L + (R-L) /2;
                if (num[M] >= 0) L = M + 1;
                else if (num[M] < 0) R = M - 1;
            }
            if (L < num.size()) cnt += num.size() - L;
        }
        return cnt;
    }
};
/*
  BS, 二元搜尋
*/
