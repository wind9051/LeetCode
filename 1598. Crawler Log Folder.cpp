class Solution {
public:
    int minOperations(vector<string>& logs) {
        int now = 0;
        for (string s : logs) {
            if (s[0] != '.') now++;
            else if (s[1] == '.' && now) now--;
        }
        return now;
    }
};
