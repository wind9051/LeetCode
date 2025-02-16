class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(begin(arr), end(arr), 0);
        
        if (sum % 3) return 0;
        
        int target = sum / 3;
        int now = 0, cnt = 0;
        for (int & n : arr) {
            now += n;
            if (now == target) {
                cnt++;
                now = 0;
            }
        }
        return cnt >= 3;
    }
};
