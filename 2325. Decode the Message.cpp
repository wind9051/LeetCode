class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> Hash;
        char letter = 'a';
        Hash[' '] = ' ';
        for (auto& c : key) {
            if (!Hash.count(c)) {
                Hash[c] = letter++;
            }
        }
        for (char& c : message) c = Hash[c];
        return message;
    }
};
