vector<int> Prime;
static const auto sieve_init = [] {
    bitset<1000010> Num; //999983
    for (int i = 2; i <= 1e6; i++) {
        if (!Num[i]) {
            Prime.push_back(i);
            for (int j = i + i; j <= 1e6; j += i) {
                Num[j] = 1;
            } 
        }
    }
    return true;
}();

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int p = -1, q = -1;
        int L = lower_bound(begin(Prime), end(Prime), left) - begin(Prime);
        
        
        while (L+1 < size(Prime) && Prime[L+1] <= right) {
            if (p == -1 || Prime[L+1] - Prime[L] < q - p) {
                p = Prime[L];
                q = Prime[L+1];
            }
            L++;
        }
        
        return {p, q};
    }
};
/*
  Math, 數學, 質數
*/
