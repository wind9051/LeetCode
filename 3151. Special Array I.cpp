class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) 
        {
            if (!((nums[i] ^ nums[i-1]) & 1)) return 0;
        }
        return 1;
    }
};
/*
  Even = last bit 0 | Odd = last bit 1
  XOR Truth Table:
  0 (Even) ^ 1 (Odd) = 1 → ✅ Valid (different parity)
  1 (Odd) ^ 0 (Even) = 1 → ✅ Valid
  0 ^ 0 = 0 → ❌ Invalid (both even)
  1 ^ 1 = 0 → ❌ Invalid (both odd)
*/
