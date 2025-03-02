class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ret;
        for (int i = 0; i < nums.size(); i+=2) {
            int F = nums[i], V = nums[i+1];
            for (int j = 0; j < F; j++) ret.push_back(V);
        }
        return ret;
    }
};
