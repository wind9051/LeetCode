class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int> dic;
        for (int i = 0; i < 3; i++) {
            for (auto ch : key[i]) dic[ch] = i;
        }

        vector<string> ret;
        for (auto s : words) {
            int now = dic[tolower(s[0])];
            bool flag = 1;
            for (auto ch : s) {
                if (now != dic[tolower(ch)]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) ret.push_back(s);
        }
        return ret;
    }
private:
    vector<string> key = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
};
/*
    Hash, 哈希
*/
