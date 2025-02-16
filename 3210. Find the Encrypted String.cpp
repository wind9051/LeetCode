class Solution {
public:
    string getEncryptedString(string s, int k) {
        k %= s.size();
        int l = s.size();
        
        string ret = "";
        for (int i = 0; i < l; i++) {
            ret += s[(i+k)%l];
        }
        return ret;
    }
};
