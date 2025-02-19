class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxn = *max_element(candies.begin(), candies.end());
        
        vector<bool> ret(candies.size(), 0);
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxn) ret[i] = 1;
        }
        return ret;
    }
};
