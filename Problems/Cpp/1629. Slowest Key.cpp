class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ch = keysPressed[0];
        int len = releaseTimes[0];
        for (int i = 1; i < releaseTimes.size(); i++) {
            int now = releaseTimes[i] - releaseTimes[i-1];
            if (now > len) {
                len = now;
                ch = keysPressed[i]; 
            }
            else if (now == len && ch < keysPressed[i]) ch = keysPressed[i]; 
        }
        return ch;
    }
};
