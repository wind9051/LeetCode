class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxN = *max_element(nums.begin(), nums.end()); 
        int minN = *min_element(nums.begin(), nums.end()); 
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (minN < nums[i] && nums[i] < maxN) res++;
        }
        return res;
    }
};
