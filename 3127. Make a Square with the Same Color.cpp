class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& g) {
        vector<int> L(4, 0);
        L[0] = (g[0][0]=='B') + (g[0][1]=='B') + (g[1][0]=='B') + (g[1][1]=='B');
        L[1] = (g[0][1]=='B') + (g[0][2]=='B') + (g[1][1]=='B') + (g[1][2]=='B');
        L[2] = (g[1][0]=='B') + (g[1][1]=='B') + (g[2][0]=='B') + (g[2][1]=='B');
        L[3] = (g[1][1]=='B') + (g[1][2]=='B') + (g[2][1]=='B') + (g[2][2]=='B');
        
        for (auto n : L) {
            if (n <= 1 || n >= 3) return true;
        }
        return false;
    }
};
