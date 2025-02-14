class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> mp(26, 0);
        for(int i = 0; i < t.length(); i++){
            mp[t[i]-'a'] = i;
        }
        int res = 0;
        for(int i = 0; i < s.length(); i++){
            res += abs(i - mp[s[i]-'a']);
        }
        return res;
    }
};
