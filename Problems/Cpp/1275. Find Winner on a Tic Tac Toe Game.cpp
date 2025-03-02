class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> R(3, 0), C(3, 0);

        int D = 0, AD = 0; //diag, antidiag
        for (int i = 0; i < moves.size(); i++) {
            int x = moves[i][0];
            int y = moves[i][1];
            if (i%2 == 0) {
                R[x]++, C[y]++;
                if (x == y) D++;
                if (x == 2-y) AD++;
            }
            else {
                R[x]--, C[y]--;
                if (x == y) D--;
                if (x == 2-y) AD--;
            }
            if (R[x] == 3  || C[y] == 3  || D == 3  || AD == 3) return "A";
            if (R[x] == -3 || C[y] == -3 || D == -3 || AD == -3) return "B";
        }
        if (moves.size() == 9) return "Draw";
        return "Pending";
    }
};
/*
    Matrix, 矩陣, 棋盤
*/
