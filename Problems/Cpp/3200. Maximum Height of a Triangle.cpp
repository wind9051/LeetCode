
class Solution {
public:
    int helper(int a, int b) {
        /*
            sum = (a1+an)*n/2

            Sn = n/2(2a+ (n-1)d)
            
            Odd rows : 
            red = 1 + 3 + 5 + ... + (2*n1-1) 
                = n1/2(2+2n1-2) = n1^2
            n1 = sqrt(red)

            Even rows :
            blue = 2 + 4 + 6 + ... + (2 * n2) 
                 = n2/2(4 + 2n2 -2) = n2(n2+1)
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
/*
  Star
  https://leetcode.cn/problems/maximum-height-of-a-triangle/solutions/2946682/san-jiao-xing-de-zui-da-gao-du-by-leetco-vch2/
  Math, 數學 推導, 等差
*/
