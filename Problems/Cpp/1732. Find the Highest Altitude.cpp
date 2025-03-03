class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxn = 0, now = 0;
        for (int i = 0; i < gain.size(); i++) {
            now = now + gain[i];
            maxn = max(maxn, now);
        }
        return maxn;
    }
};
