class Solution {
public:
    string defangIPaddr(string address) {
        string ret = "";
        for (char ch : address) {
            if (ch == '.') ret += "[.]";
            else ret += ch;
        }
        return ret;
    }
};
