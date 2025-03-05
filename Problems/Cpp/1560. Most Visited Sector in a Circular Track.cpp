class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int s = rounds.front(),
            e = rounds.back();
        
        vector<int> res;
        if (s <= e) {
            for (int i = s; i <= e; i++) res.push_back(i);
        }
        else {
            for (int i = 1; i <= e; i++) res.push_back(i);
            for (int i = s; i <= n; i++) res.push_back(i);
        }
        return res;
    }
};
/*
    歸納
*/
