class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> nums;
        for (int i = 1; i <= n/2; i++) {
            nums.emplace_back(i);
            nums.emplace_back(-i);
        }
        if (n%2) nums.emplace_back(0);
        return nums;
    }
};
