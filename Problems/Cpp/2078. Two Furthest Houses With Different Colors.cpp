class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxn = 0;
        int L = 0, R = colors.size()-1;
        for (int i = 0; i < colors.size(); i++) {
            if (colors[L] != colors[i]) maxn = max(maxn, abs(i - L));
            if (colors[R] != colors[i]) maxn = max(maxn, abs(R - i));
        }
        return maxn;
    }
};
