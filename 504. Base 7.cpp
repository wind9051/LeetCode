class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        string ret = "";
        int now = num;
        now = abs(now);
        while (now) {
            ret += to_string(now % 7);
            now /= 7;
        }
        if (num < 0) ret += '-';
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
