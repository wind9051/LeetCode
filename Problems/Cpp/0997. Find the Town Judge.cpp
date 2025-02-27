class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegrees(n+1, 0), outDegrees(n+1, 0);
        for (auto & E : trust) {
            outDegrees[E[0]]++;
            inDegrees[E[1]]++;
        }
        for (int v = 1; v <= n; v++) {
            if (outDegrees[v] == 0 && inDegrees[v] == n-1) return v;
        }
        return -1;
    }
};
/*
    Graph, 圖, degrees, 出入度
*/
