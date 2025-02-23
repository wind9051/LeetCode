class Solution {
public:
    char repeatedCharacter(string s) {
        bitset<27> vis = 0;
        for (auto ch : s) {
            int now = ch-'a';
            if (vis[now]) return now+'a';
            vis[now] = 1;
        }
        return ' ';
    }
};
