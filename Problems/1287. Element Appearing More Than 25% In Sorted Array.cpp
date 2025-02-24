class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int now = -1, cnt = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (now == arr[i]) cnt++;
            else {
                now = arr[i];
                cnt = 1;
            }
            if (cnt * 4 > arr.size()) return now;
        }
        return -1;
    }
};
