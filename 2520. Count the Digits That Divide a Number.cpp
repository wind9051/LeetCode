class Solution {
public:
    int countDigits(int num) {
        int val = num, cnt = 0;
        while (val) {
            cnt += (num % (val%10)) == 0 ? 1 : 0;
            val /= 10;
        }
        return cnt;
    }
};
