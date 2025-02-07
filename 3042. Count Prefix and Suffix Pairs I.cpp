class Solution {
public:
    bool isPrefixAndSuffix(const string& str1, const string& str2) {
        int l1 = str1.size(), l2 = str2.size();
        if (l1 > l2) return false;
        return str2.substr(0, l1) == str1 && str2.substr(l2 - l1) == str1;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int ret = 0;
        for (int i = 0; i < words.size(); i++) 
        {
            for (int j = i + 1; j < words.size(); j++) 
            {
                if (isPrefixAndSuffix(words[i], words[j])) ret++;
            }
        }
        return ret;
    }
};
