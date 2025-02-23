class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> Hash(26, 0);
        for (char ch : word) Hash[ch-'a']++;
        
        for (int i = 0; i < 26; i++) {
            if (Hash[i]) {
                unordered_set<int> freq;

                Hash[i]--;
                for (int j = 0; j < 26; j++) {
                    if (Hash[j]) freq.insert(Hash[j]);
                }
                if (freq.size() == 1) return true; 
                Hash[i]++;
            }
        }
        return false;
    }
};
