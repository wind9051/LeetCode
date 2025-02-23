class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<vector<bool>> cnt(3, vector<bool>(105, 0));

        for (auto & n : nums1) cnt[0][n] = true;
        for (auto & n : nums2) cnt[1][n] = true;
        for (auto & n : nums3) cnt[2][n] = true;
        
        vector<int> Union;
        for (int i = 1; i <= 100; i++) {
            if (cnt[0][i] + cnt[1][i] + cnt[2][i] > 1) Union.push_back(i);
        }
        return Union;
    }
};
