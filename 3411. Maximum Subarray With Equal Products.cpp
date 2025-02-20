/*
    Math
*/
class Solution {
public:

    int Gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int Lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    int factorial(int n) {
        int sum = 1;
        for (int i = 1; i <= n; i++) sum *= i;
        return sum;
    } 

    int maxLength(vector<int>& nums) {
        int n = nums.size();
        
        int maxL = 0;
        for (int i = 0; i < n; i++) {
            int currGCD = nums[i];
            int currLCM = nums[i];
            int currPro = nums[i];
            for (int j = i + 1; j < n; j++) {
                currPro *= nums[j]; //over flow
                currGCD = gcd(currGCD, nums[j]);
                currLCM = lcm(currLCM, nums[j]);
                
                //lcm = 1*2*...*10 = 10n! = 3628800 gcm = [1, 10]
                if (currPro > 1e6) break;

                if (currPro == currLCM * currGCD) {
                    maxL = max(maxL, j - i + 1);
                }
            }
        }
        return maxL;
    }
};
