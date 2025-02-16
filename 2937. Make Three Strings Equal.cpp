class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int L = 0, minL = min({s1.size(), s2.size(), s3.size()});
        while (L < minL && s1[L] == s2[L] && s2[L] == s3[L]) L++;
        
        if (L == 0) return -1;
        return (s1.size() + s2.size() + s3.size()) - L * 3;
    }
};
