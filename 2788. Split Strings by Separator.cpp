class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ret;
        for (auto s : words) {
            string now = "";
            s += separator;
            for (auto ch : s) {
                if (ch == separator) {
                    if (now != "") ret.push_back(now);
                    now = "";
                }
                else now += ch;
            }
            //if (now != "") ret.push_back(now);
        }
        return ret;
    }
};
