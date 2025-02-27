class Solution {
public:
    int mov(int dy, int dx) {
        int x = pawnsX, y = pawnsY;
        while (y >= 0 && y < 8 && x >= 0 && x < 8 && G[y][x] != 'B') {
            if (G[y][x] == 'p') return 1;
            x += dx, y += dy;
        }
        return 0;
    }
    
    int numRookCaptures(vector<vector<char>>& board) {
        cout<<board[0][0]<<endl;
        this->G = board;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'R') {
                    this->pawnsY = i;
                    this->pawnsX = j;
                    return mov(0, 1) + mov(0, -1) + mov(1, 0) + mov(-1, 0);
                }
            }
        }
        return 0;
    }
private:
    vector<vector<char>> G;
    int pawnsY, pawnsX;
};
/*
  Matrix, 矩陣, 棋盤
*/
