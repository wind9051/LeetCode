/*
  Star
  math
*/
class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int Rounds = k/n;
        int Count = k%n;
        if (Rounds%2==0) return Count;
        else return n-Count;
    }
};
