class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        for (int i = 0; i < words.size(); i++) {
            if (words[(startIndex + i) % n] == target) return i;
            if (words[(startIndex - i + n) % n] == target) return i;
        }
        return -1;
    }
};
