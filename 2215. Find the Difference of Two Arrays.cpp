class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        bitset<2005> vis1 = 0, vis2 = 0;
        for (auto& i : nums1) vis1[i+1000] = 1;
        for (auto& i : nums2) vis2[i+1000] = 1;

        vector<int> Union1, Union2;
        for (int i = 0; i <= 2000; i++) {
            if (vis1[i] != vis2[i]) {
                if (vis1[i]) Union1.push_back(i-1000);
                else Union2.push_back(i-1000);
            }
        }
        return {Union1, Union2};
    }
};
