class Solution {
public:
    int maxDifference(string s) {
        vector<int> Hash(26, 0); //frequency
        for (char c : s) {
            Hash[c-'a']++;
        }

        int maxOdd = INT_MIN, minEven = INT_MAX;
        for (int f : Hash) {
            if (f > 0) { 
                if (f % 2) {
                    maxOdd = max(maxOdd, f);    
                } 
                else {
                    minEven = min(minEven, f);
                }
            }
        }
        if (maxOdd == INT_MIN || minEven == INT_MAX) {
            return 0; 
        }
        return maxOdd - minEven;
    }
};
