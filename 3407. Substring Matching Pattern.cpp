class Solution {
public:
    bool hasMatch(string s, string p) {
        int it = p.find("*");
        string b = p.substr(0, it);
        string e = p.substr(it + 1);

        int L = s.find(b);
        int R = s.find(e, L + b.size());
        return L != -1 && R != -1;
    }
};
