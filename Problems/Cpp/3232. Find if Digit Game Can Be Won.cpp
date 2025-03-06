class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single_sum = 0, double_sum = 0;
        for (auto n : nums) {
            if (n < 10) single_sum += n;
            else double_sum += n;
        }
        return single_sum != double_sum;
    }
};
/*
  math, 數學 數論
*/
