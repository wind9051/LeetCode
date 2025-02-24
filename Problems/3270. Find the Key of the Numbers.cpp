class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int key = 0, mul = 1;
        while (mul <= 1000) {
            key += mul * min(num1 / mul%10, min(num2 / mul%10, num3 / mul%10));  
            mul *= 10; 
        }
        return key;
    }
};
