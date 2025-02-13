class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;
        int V = 0, C = 0; //Vowel, Consonant
        for (auto i : word) {
            if (isalpha(i)) {
                if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                    i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U') V++;
                else C++;
            }
            if (!(isalpha(i) || isdigit(i))) return false;
        }
        if (V && C) return true;
        return false;
    }
};
