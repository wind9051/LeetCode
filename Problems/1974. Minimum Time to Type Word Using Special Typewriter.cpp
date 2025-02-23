class Solution {
public:
    int minTimeToType(string word) {
        int ptr = 0, cnt = 0;
        for (char ch : word) {
            int cur = ch - 'a';
            cnt += min(abs(cur - ptr), 26 - abs(cur - ptr)) + 1;
            ptr = cur;
        }
        return cnt;
    }
};
