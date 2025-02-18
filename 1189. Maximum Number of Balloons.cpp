class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> hash(26, 0);
        for (auto i = 0; i < text.size(); i++) {
            hash[text[i]-'a']++;
        }
        
        return min(hash[0], min(hash[1], min(hash[11]/2, min(hash[13], hash[14] / 2))));
    }
};
