class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        
        int L = 0, R = 1;
        while (R < nums.size()) {
            if (nums[L] != nums[R]) {
                nums[++L] = nums[R];
            }
            R++;
        }
        return L+1;
    }
};
/*
    Two pointer, 雙指針
*/
