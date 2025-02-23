class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool Flush = 1;
        char suit = suits[0];
        for (auto ch : suits) {
            if (suit != ch) Flush = 0;
        }
        if (Flush) return "Flush";

        int freq = 0;
        vector<int> Hash(14, 0);
        for (auto n : ranks) {
            Hash[n]++;
            freq = max(freq, Hash[n]);
        }
        if (freq >= 3) return "Three of a Kind";
        else if (freq == 2) return "Pair";
        else return "High Card";
    }
};
