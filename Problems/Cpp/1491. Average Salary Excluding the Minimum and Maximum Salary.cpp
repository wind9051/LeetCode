class Solution {
public:
    double average(vector<int>& salary) {
        int minN = *min_element(begin(salary), end(salary));
        int maxN = *max_element(begin(salary), end(salary));
        int totalSum = accumulate(begin(salary), end(salary), 0);
        int len = salary.size();

        return double(totalSum - minN - maxN) / (len - 2);
    }
};
/*
  Math, 數學
*/
