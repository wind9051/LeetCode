class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ret = 0;
        for (int i = 0; i != nums.size(); i++)
        {
            unordered_set<int> Hash;
            for (int j = i; j != nums.size(); j++)
            {
                Hash.insert(nums[j]);
                int tp = Hash.size();
                ret += (tp * tp);
            }
        }
        return ret;
    }
};
