class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for (string & s : words) {
            if (pref == s.substr(0, pref.size())) cnt++;
        }
        return cnt;
    }
};
/*
  String 字串
*/
