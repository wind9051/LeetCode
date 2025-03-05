class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int L = 0, R = 0, zero = 0;
        while (L + zero < arr.size()) {
            if (arr[L++] == 0) zero++;
        }
        L--;
        R = L + zero;

        while (L >= 0) {
            if (R < arr.size()) arr[R] = arr[L];
            if (arr[L] == 0 && --R) arr[R] = 0;
            L--; R--;
        }
    }
};
/*
    Two pointer, 雙指針
*/
