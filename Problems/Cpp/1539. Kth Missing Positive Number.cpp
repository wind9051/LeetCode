class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        bitset<1001> Hash;
        for (auto n : arr) Hash[n] = 1;

        for (int i = 1; i <= 1000; i++) {
            if (!Hash[i]) k--;
            if (k == 0) return i;
        }
        return 1e3 + k;
    }
};
