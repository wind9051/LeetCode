class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt0 = 0, cnt1 = 0;
        for (int n : students) (n == 0) ? cnt0++ : cnt1++;
        for (int i = 0; i < sandwiches.size(); i++) {
            (sandwiches[i] == 0) ? cnt0-- : cnt1--;
            if (cnt0 < 0 || cnt1 < 0) return sandwiches.size() - i;
        }
        return 0;
    }
};
