class Solution {
public:
    int addedInteger(vector<int>& n1, vector<int>& n2) {
        //return (accumulate(begin(n2), end(n2), 0) - accumulate(begin(n1), end(n1), 0)) / (int)n1.size();
        return *min_element(begin(n2), end(n2)) - *min_element(begin(n1), end(n1));
    }
};
/*
    Math, 數學
*/
