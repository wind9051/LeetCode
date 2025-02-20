class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ret;
        
        int L = 0;
        while (L < nums.size()) {
            int low = L++;
            while (L < nums.size() && nums[L]-1 == nums[L-1]) L++;

            int high = L - 1;
            if (low != high) ret.push_back(to_string(nums[low]) + "->" + to_string(nums[high]));
            else ret.push_back(to_string(nums[low]));
        }
        return ret;
    }
};
