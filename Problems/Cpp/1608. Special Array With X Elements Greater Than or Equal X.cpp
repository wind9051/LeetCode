class Solution {
public:
    int specialArray(vector<int>& nums) {
        vector<int> Hash(1001, 0);
        for (auto x : nums) Hash[x]++;

        int sumN = 0;
        for (int i = 1000; i >= 0; i--) {
            sumN += Hash[i];
            if (sumN == i) return i;
        }
        return -1;
    }
};
/*
  Hash, 哈希
*/
