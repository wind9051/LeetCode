class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int cnt = 0;
        for (auto n : batteryPercentages) {
            if (n > cnt) cnt++;
        }
        return cnt;
    }
};
