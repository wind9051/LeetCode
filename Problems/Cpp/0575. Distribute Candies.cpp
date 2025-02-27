class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        bitset<200001> Hash;
        for (const int type : candies) {
            Hash.set(type+1e5);
        }
        return min(candies.size() / 2, Hash.count());
    }
};
/*
    Hash, Bit, 位元, 哈希
*/
