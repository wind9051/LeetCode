/*
    Math
    S = k + 2k + ... + mk
      = k × (1 + 2 + ... + m)
      = k x m(m+1)/2
      
    divisible 3, 5, 7
*/

class Solution {
public:
    //Arithmetic Sequence
    int cal(int n, int k) {
        return k * (n/k) * (n/k + 1) / 2;;
    }
    int sumOfMultiples(int n) {
        return cal(n, 3) + cal(n, 5) + cal(n, 7) - cal(n, 3*5) - cal(n, 5*7) - cal(n, 3*7) + cal(n, 3*5*7);
    }
};
