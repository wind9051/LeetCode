class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        unordered_map<int, int> freq;   
        for (const int d: digits) freq[d]++;
        
        for (int i = 1; i < 10; i++) {
            for (int j = 0; freq[i] > 0 && j < 10; j++) {
                for (int k = 0; freq[j] > (i == j) && k < 10; k += 2) {
                    if (freq[k] > (k == i) + (k == j)) {
                        res.push_back(i * 100 + j * 10 + k);
                    }
                }
            }
        }           
        return res;
    }
};
/*
    Hash, Math 數學
*/
