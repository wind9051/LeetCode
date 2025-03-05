class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cntO = 0;
        for (auto n : arr) {
            cntO = (n%2) ? cntO+1 : 0;
            if (cntO == 3) return true;
        }
        return false;
    }
};
