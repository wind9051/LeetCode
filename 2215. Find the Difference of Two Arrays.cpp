class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> vis1, vis2;
        for (int & n : nums1) vis1.insert(n);
        for (int & n : nums2) vis2.insert(n);
        
        vector<int> Union1, Union2;
        for (auto n : vis1) {
            if (!vis2.count(n)) Union1.push_back(n);
        }
        for (auto n : vis2) {
            if (!vis1.count(n)) Union2.push_back(n);
        }
        return {Union1, Union2};
    }
};
