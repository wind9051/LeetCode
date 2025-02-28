class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k--) {
            int & minN = *min_element(begin(nums), end(nums));
            minN *= multiplier; 
        }
        return nums;
    }
};
