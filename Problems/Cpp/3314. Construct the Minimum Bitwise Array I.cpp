class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;
        for (int n : nums) {
            if (n == 2) {
                ans.push_back(-1);
                continue;
            }
            int R = 0;
            while ((n >> R) & 1) R++;
            ans.push_back(n - (1 << R-1));
        }
        return ans;
    }
};
/*
    Bit, 位元
    Star
    expect 2 find minBit = 0, 
    x | x+1 把x最后一个零变成1
    x = 100111, 
    x∣(x+1) = 100111 ∣ 101000 = 101111
    
    101111 - 1000 = 100111
*/
