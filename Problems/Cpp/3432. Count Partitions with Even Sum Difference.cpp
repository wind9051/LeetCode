class Solution {
public:
    int countPartitions(std::vector<int>& nums) {
        int totalSum = accumulate(begin(nums), end(nums), 0);

        int leftSum = 0, rightSum = 0, count = 0;
        for (int i = 0; i < nums.size() - 1; i++) { 
            leftSum += nums[i]; 
            rightSum = totalSum - leftSum; 

            if ((leftSum % 2) == (rightSum % 2)) {
                count++; 
            }
        }
        return count; 
    }
};
/*
    Math, 數學, 奇偶
    a = oven, b = oven, a-b = oven
*/
