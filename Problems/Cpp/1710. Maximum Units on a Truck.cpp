class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), 
        [](vector<int>& x, vector<int>& y) {return x[1] > y[1];});
                
        int sum = 0;
        for (vector<int> num : boxTypes) {
            int x = truckSize >= num[0] ? num[0] : truckSize;
            sum += x * num[1];
            truckSize -= x;
            if (!truckSize) break;
        }
        return sum;
    }
};
