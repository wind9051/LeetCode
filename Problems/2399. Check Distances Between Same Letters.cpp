class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> Hash(26, 0);
        for (int i = 0; i < s.size(); i++) {
            int n = s[i] - 'a';
            if (Hash[n]) {
                if (distance[n] != i - Hash[n]) return false;
            }
            Hash[n] = i+1;
        }
        return true;
    }
};
