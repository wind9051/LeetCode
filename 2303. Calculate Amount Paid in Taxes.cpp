class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double sum = 0.0, lower = 0, upper = 0;
        for (int i = 0; i < brackets.size(); i++) {
            upper = min(income, brackets[i][0]);
            sum += (double)(upper - lower) * brackets[i][1] / 100;
            lower = upper;
        }
        return sum;
    }
};
