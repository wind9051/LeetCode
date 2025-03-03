class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> Y(105, 0);
        for (auto V : logs) {
            Y[V[0]-1949] ++;
            Y[V[1]-1949] --;
        }
        int maxn = 0;
        for (int i = 1; i <= 100; i++) {
            Y[i] += Y[i-1];
            maxn = max(maxn, Y[i]);
        }
        for (int i = 1; i <= 100; i++) {
            if (maxn == Y[i]) return i + 1949;
        }
        return -1;
    }
};
/*
    Prefix, 前綴
*/
