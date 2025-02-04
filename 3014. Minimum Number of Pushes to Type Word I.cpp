class Solution {
public:
    int minimumPushes(string word) {
        int l = word.size();
        int d = l / 8, m = l % 8;
        return 8 * d*(1+d) / 2 + m * (d+1);
    }
};
