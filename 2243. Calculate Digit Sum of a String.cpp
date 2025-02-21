class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size() > k) {
            string now = "";
            int cnt = 1, sum = 0;
            for (char ch : s) {
                sum += ch - '0';
                if (cnt++ >= k) {
                    now += to_string(sum);
                    cnt = 1;
                    sum = 0;
                }
            }
            if (s.size() % k) now += to_string(sum);
            s = now;
        }
        return s;
    }
};
