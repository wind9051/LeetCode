class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') flag = true;
            if (s[i] == '1' && flag) return false;
        }
        return true;
    }
};
