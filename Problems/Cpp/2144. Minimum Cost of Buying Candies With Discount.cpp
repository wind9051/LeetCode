class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        
        int sum = 0, cnt = 0;
        for (int i = cost.size()-1; i >= 0; i --) {
            if (++cnt != 3) sum += cost[i];
            else cnt = 0;
        }
        return sum;
    }
};
