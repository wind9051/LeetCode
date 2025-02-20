class Solution {
public:
    int titleToNumber(string columnTitle) {
        long sum = 0;
        for (auto & ch : columnTitle) {
            sum = sum * 26 + ch - 'A' + 1;
        }
        return sum;
    }
};
