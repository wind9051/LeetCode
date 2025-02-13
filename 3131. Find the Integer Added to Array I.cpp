class Solution {
public:
    int addedInteger(vector<int>& n1, vector<int>& n2) {
        return *min_element(begin(n2), end(n2)) - *min_element(begin(n1), end(n1));
    }
};
