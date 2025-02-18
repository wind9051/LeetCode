class Solution {
public:
    vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};

    int is_leap(int y) {
        return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
    }
    
    int dayOfYear(string date) {
        
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));

        if (is_leap(y)) days[1] ++;

        int ans = 0;
        for (int i = 0; i < m - 1; i++) {
            ans += days[i];
        }
        ans += d;

        return ans;
    }
};
