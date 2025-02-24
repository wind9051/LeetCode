class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> Hash(10, vector<int>(11, 0)); 
        int res = 0;
        
        bitset<10> Vis;
        for (auto & p : pick) {
            if (++Hash[p[0]][p[1]] > p[0] && !Vis[p[0]]) {
                res++;
                Vis[p[0]] = 1;
            }
        }
        return res;
    }
};
