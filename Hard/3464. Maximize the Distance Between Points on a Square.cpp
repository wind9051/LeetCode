using ll = long long;

class Solution {
public:
    int maxDistance(int side, vector<vector<int>>& points, int k) {

        // LD (x, y) -> y
        // LU (x, y) -> side + x
        // RU (x, y) -> side * 2 + (side - y)
        // RD (x, y) -> side * 3 + (side - x)

        //2D transfer 1D
        vector<ll> Num;
        for (auto& p : points) {
            int x = p[0], y = p[1];

            if (x == 0) Num.push_back(y);
            else if (y == side) Num.push_back(side + x);
            else if (x == side) Num.push_back((ll) side * 3 - y);
            else Num.push_back((ll) side * 4 - x);
        }
        sort(begin(Num), end(Num));
        
        this->Num = Num;

        //BS find low
        int L = 1, R = side;
        while (L < R) {
            int M = L + (R - L) / 2 + 1;
            if (check(M, side, k)) L = M;
            else R = M - 1;
        }
        return L;
    }
private:
    vector<ll> Num;
    bool check(int low, int side, int k) {
        for (ll& start : Num) {

            ll end = start + (ll) 4 * side - low;
            ll ptr = start;

            bool ok = 1;

            for (int i = 0; i < k-1; i++) {
                int L = 0, R = Num.size() - 1;
                while (L < R) {
                    int M = L + (R - L) / 2;
                    if (Num[M] >= ptr + low) R = M;
                    else L = M + 1;
                }
                if (Num[L] < ptr + low || Num[L] > end) {
                    ok = 0;
                    break;
                }
                ptr = Num[L];
            }
            if (ok) return true;
        }
        return false;
    };
};
/*
  Mapping + Greedy + BS, 映射 貪心 二元搜尋
*/
