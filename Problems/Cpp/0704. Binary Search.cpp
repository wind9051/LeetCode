class Solution {
public:
    int BS(int L, int R) {        
        while (L <= R) {
            int M = L + (R-L) / 2;
            if (nums[M] < x) L = M + 1;
            else if (nums[M] > x) R = M - 1;
            else return M;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        this->x = target;
        this->nums = nums;
        return BS(0, nums.size()-1);
    }
private:
    vector<int> nums;
    int x;
};
/*
  BS, 二元搜尋
*/
