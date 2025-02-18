class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> hash(30, 0);
        for (char ch : chars) hash[ch-'a'] ++;
        
        int ret = 0;
        for (string word : words) {
            bool flag = 1;
            int now[30] = {0};
            for (char ch : word) {
                int i = ch - 'a';
                if (++now[i] > hash[i]) {
                    flag = 0; break;
                }
            }
            
            if (flag) ret += word.size();
        }
        
        return ret;
    }
};
