class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;
        int res = -1, maxFreq = 0;
        for (int num : nums) {
            if (num % 2 == 0) {
                freq[num]++;
                if (freq[num] > maxFreq || (freq[num] == maxFreq && num < res)) {
                    maxFreq = freq[num];
                    res = num;
                }
            }
        }
        return res;
    }
};

