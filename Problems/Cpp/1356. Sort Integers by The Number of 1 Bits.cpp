class Solution {
public:
/*
    static int numtobit(int x){
        int cnt = 0;
        while (x) {
            cnt += x % 2;
            x >>= 1;
        }
        return cnt;
    }
*/  
    static bool cmp(int & x, int & y){
        int a = __builtin_popcount(x);
        int b = __builtin_popcount(y);
        if (a == b) return x <= y;
        else return a < b;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
/*
    Bit, 位元
    整數2bit中1的個數
*/
