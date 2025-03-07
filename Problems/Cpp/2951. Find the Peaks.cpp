class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> ret;
        for (int i = 1; i < size(mountain)-1; i++) {
            if (mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]) ret.push_back(i); 
        }
        return ret;
    }
};
