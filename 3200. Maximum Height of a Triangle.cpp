/*
  Star
  Math
*/
class Solution {
public:
    int helper(int a, int b) {
        /*
            sum = (a1+an)*n/2

            Odd rows : 
            red = 1 + 3 + 5 + ... + (2*n1-1) = n1^2
            n1 = sqrt(red)

            Even rows :
            blue = 2 + 4 + 6 + ... + (2 * n2) = n2(n2+1)
            n2^2 + n2 - blue = 0
            n2 = (-1 + sqrt(1 + 4*b)) / 2
        */
        int n1 = sqrt(a);
        int n2 = (-1 + sqrt(1 + 4 * b)) / 2; 
        
        if (n1 <= n2) return n1 * 2; 
        else return n2 * 2 + 1; 
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(helper(red, blue), helper(blue, red));
    }
};
