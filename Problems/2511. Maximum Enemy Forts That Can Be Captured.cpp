/*
    Two Pointer
*/
class Solution {
public:
    int captureForts(vector<int>& forts) {
        int res = 0;
        for (int L = 0, R = 0; R < forts.size(); R++) {
            if (forts[R] != 0) {
                if (forts[L] == -forts[R])
                    res = max(res, R - L - 1);
                L = R;
            }
        }
        return res;
    }
};
