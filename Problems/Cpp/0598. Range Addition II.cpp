class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int R = m, C = n;
        for (auto v : ops) {
            R = min(R, v[0]);
            C = min(C, v[1]);
        }
        return C * R;
    }
};
/*
    Matrix, 矩陣
*/
