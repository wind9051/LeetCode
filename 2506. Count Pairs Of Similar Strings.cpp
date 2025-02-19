/*
    Bit Manipulation
*/
class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<int, int> F;
        
        int ret = 0;
        for (string& word : words) {
            int mask = 0;
            for (char ch : word) {
                mask |= (1 << (ch - 'a')); 
            }
            ret += F[mask]++;  

            //F[mask]++;      
        }

        return ret;
    }
};
