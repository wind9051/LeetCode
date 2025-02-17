/*
    Stack
*/
class Solution {
public:
    string removeDuplicates(string s) {
        string temp = "";
        
        int L = 0;
        while (L < s.length()) {
            if (temp.empty() || s[L] != temp.back()) {
                temp.push_back(s[L]);
            } 
            else {
                temp.pop_back();
            }
            L++;
        }
        
        return temp;
    }
};
