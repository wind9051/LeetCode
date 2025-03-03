class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int len = code.size();
        
        vector<int> ret(len, 0);
        for (int i = 0; i < len; i++) {
            if (k == 0) {
                ret[i] = 0;
            }
            else if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    ret[i] += code[(i+j)%len];
                }
            }
            else if (k < 0) {
                for (int j = 1; j <= -k; j++) {
                    ret[i] += code[(i-j+len)%len];
                }
            }
        }
        return ret;
    }
};
