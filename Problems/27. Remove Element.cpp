class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int L = 0, R = 0;
        while (R < nums.size()) {
            if (val != nums[R]) {
                nums[L++] = nums[R];
            }
            R++;
        }
        return L;
    }
};
/*
    Two pointer, 雙指針
*/
