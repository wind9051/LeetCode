class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> PQ;
        for (int i = 0; i < mat.size(); i++) {
            int L = 0, R = mat[0].size()-1;
            while (L <= R) {
                int M = L + (R-L) / 2;
                if (mat[i][M] == 1) L = M + 1;
                if (mat[i][M] == 0) R = M - 1;
            }
            PQ.push_back({L, i});
        }
        sort(begin(PQ), end(PQ));
        
        vector<int> ret;
        for (int i = 0; i < k; i++) {
            ret.push_back(PQ[i].second);
        }
        return ret;
    }
};
/*
    BS, 二元搜尋
*/
