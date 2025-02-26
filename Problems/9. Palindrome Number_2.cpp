class Solution {
    public: 
        bool isPalindrome(int x) {
        if (x < 0) return false;

        int div = 1;
        while (x / div >= 10) div *= 10;
        
        while (x > 0) {
            int L_num = x / div;
            int R_num = x % 10;
            if (L_num != R_num) return false;

            x = (x % div) / 10;
            //remove 2bit with L, R  1221 -> 22
            div /= 100;
        }
        return true;
    }
};
/*
  Palindrome, 回文
*/
