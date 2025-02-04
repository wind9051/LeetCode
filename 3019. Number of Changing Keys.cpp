class Solution {
public:
    int countKeyChanges(string s) {
        int ret = 0;
        char now = tolower(s[0]);
        for (auto c : s)
        {
            c = tolower(c);
            if (now != c) ret++;
            now = c;
        }
        return ret;
    }
};
