class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for (auto n : nums)
        {
            if (n < k) count++;
        }
        return count;
    }
};
