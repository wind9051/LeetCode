class Solution {
public:
    //divisible by every digit it contains
    bool selfs(int n){
        int sum = n;
        while (n) {
            if (n%10 == 0) return false;
            else if(sum % (n%10) != 0) return false;
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; i++) {
            if (selfs(i)) res.push_back(i);
        }
        return res;
    }
};
/*
    Math, 數學
*/
