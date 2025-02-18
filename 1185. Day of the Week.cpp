class Solution {
public:
    vector<int> days = {31,28,31,30,31,30,31,31,30,31,30,31};
    vector<string> weekName = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int is_leap(int y) {
        return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
    }

    //19710101 = Friday
    string dayOfTheWeek(int day, int month, int year) {
        int sum = 0;
        for (int i = 1971; i < year; i++) {
            sum += is_leap(i) ? 366 : 365;
        }
        for (int i = 0; i < month-1; i++) {
            sum += days[i];
        }
        if (month > 2 && is_leap(year)) sum++;

        sum += day;

        int diff = ((sum % 7) + 4) % 7;

        return weekName[diff];
    }
};
