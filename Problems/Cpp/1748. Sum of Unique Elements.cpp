class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> hash(105, 0);
        for (auto & n : nums) {
            hash[n]++;
        }
        int sum = 0;
        for (auto n = 1; n <= 100; n++) {
            if (hash[n] == 1) sum += n;
        }
        return sum;
    }
};
