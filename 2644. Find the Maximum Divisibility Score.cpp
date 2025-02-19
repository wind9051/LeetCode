class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int maxC = 0;
        int minN = INT_MAX;
        
        for (int i = 0; i < divisors.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) cnt++;
            }
           
            if (cnt > maxC || (cnt == maxC && divisors[i] < minN)) {
                maxC = cnt;
                minN = divisors[i];
            }
        }
        return minN;
    }
};
