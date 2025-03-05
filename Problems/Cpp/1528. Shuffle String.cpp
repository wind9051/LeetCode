class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string restored(s.size(), ' ');

        for (int i = 0; i < s.size(); i++) {
            restored[indices[i]] = s[i];
        }

        return restored;
    }
};
/*
    String, 位移
*/
