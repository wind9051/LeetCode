/*
    Math
*/
class Solution {
public:
    int fillCups(vector<int>& amount) {
        sort(amount.begin(), amount.end());
        //1 2 7
        if (amount[2] > amount[1] + amount[0]) return amount[2];
        return (accumulate(amount.begin(), amount.end(), 0) + 1) / 2;
    }
};
