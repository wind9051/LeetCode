class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int cnt = 0;
        for (string op : operations) {
            if (op[1] == '+') cnt++;
            else cnt--;
        }
        return cnt;
    }
};
