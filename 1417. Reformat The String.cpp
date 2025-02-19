class Solution {
public:
    string reformat(string s) {
        string salpha = "", sdigit = "";
        for (char ch : s) {
            if (isalpha(ch)) salpha += ch;
            else sdigit += ch;
        }
        string ret = "";
        int L = 0, R = 0;
        int dlen = sdigit.size(), alen = salpha.size();

        if (abs(dlen - alen) > 1) return "";
        else if (dlen > alen) ret += sdigit[L++];
        else if (dlen < alen) ret += salpha[R++];
        
        while (L < dlen) {
            if(L > R) {
                //a0
                ret += salpha[R++];
                ret += sdigit[L++];
            }
            else {
                //0a
                ret += sdigit[L++];
                ret += salpha[R++];
            }
        }
        
        return ret;
    }
};
