class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> stk;
        vector<int> ret = prices;
        for (int i = 0; i < prices.size(); i++) {
            while (!stk.empty() && prices[i] <= prices[stk.top()]) {
                ret[stk.top()] = prices[stk.top()] - prices[i];
                stk.pop();
            }
            stk.push(i);
        }
        return ret;
    }
};
/*
    Stack, 堆疊
*/
