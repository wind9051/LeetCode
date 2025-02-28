class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int mn = *min_element(nums.begin(), nums.end()); 
        if (mn < k) return -1; 
        
        int ans = 0;
        bitset<105> Hash;
        for (auto &n: nums) {
            if (!Hash[n]) {
                Hash[n] = 1;
                ans++;
            } 
        }

        //n == k [5, 4, 2], k = 2 
        if (Hash[k]) ans--; 
        return ans; 
    }
};
/*
    Hash, 哈希
*/
