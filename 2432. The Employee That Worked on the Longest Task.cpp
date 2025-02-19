class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxT = 0, cur = 0;
        vector<int> E(n+1, 0);
        for (auto v : logs) {
            int unit = v[1] - cur;
            
            maxT = max(maxT, unit);
            E[v[0]] = max(E[v[0]], unit);

            cur = v[1];
        }
        for (int i = 0; i <= n; i++) {
            if (maxT == E[i]) return i;
        }
        return -1;
    }
};
