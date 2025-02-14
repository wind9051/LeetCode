class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for (auto n : nums) {
            if (n%3 != 0) ans++;
        }
        return ans;
    }
};
