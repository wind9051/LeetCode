class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt = 0;
        for (auto n : hours) {
            if (n >= target) cnt++;
        }
        return cnt;
    }
};
