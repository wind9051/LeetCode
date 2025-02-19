class Solution {
public:
    string winningPlayer(int x, int y) {
        int R_x = x / 1, R_y = y / 4;
        return min(R_x, R_y) % 2 ? "Alice" : "Bob";
    }
};
