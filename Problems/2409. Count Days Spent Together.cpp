class Solution {
    vector<int> days = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    int stringOfDay(string s) {
        int m = stoi(s.substr(0, 2));
        int d = stoi(s.substr(3, 2));
        int ans = 0;
        for (int i = 1; i <= m; i++) {
            ans += days[i-1];
        }
        ans += d;
        return ans;
    }

public:
    int countDaysTogether(string sa1, string sa2, string sb1, string sb2) {
        int a1 = stringOfDay(sa1), a2 = stringOfDay(sa2), b1 = stringOfDay(sb1), b2 = stringOfDay(sb2);
        int ans = 0;
        for (int i = 0; i < 367; ++i) {
            if (a1 <= i && i <= a2 && b1 <= i && i <= b2) {
                ++ans;
            }
        }
        return ans;
    }
};
