class Solution {
public:
    //greater<int>()
    static bool cmp(int & a, int & b) {
        return a > b;
    }

    int thirdMax(vector<int>& nums) {
        sort(begin(nums), end(nums), cmp);

        int eleCnt = 1, preN = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            if (preN != nums[i]) {
                eleCnt++;
                preN = nums[i];
            }
            
            if (eleCnt == 3) return nums[i];
        }
        
        return nums[0];
    }
};
