class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int n = password.size();
        if (n < 8) return false;

        int l = 0, u = 0, d = 0, s = 0;
        for (int i = 0; i < n; i++) {
            char ch = password[i];

            if (i && ch == password[i - 1]) return false;

            islower(ch)&& (l = 1);
            isupper(ch)&& (u = 1);
            isdigit(ch)&& (d = 1);
            ispunct(ch)&& (s = 1);
        }
        return l == 1 && u == 1 && d == 1 && s == 1;
    }
};
