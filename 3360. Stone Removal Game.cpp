class Solution {
public:
    bool canAliceWin(int n) {
        int stone = 0;
        bool aliceWin = true;
        for (int i = 10; i >= 1 && sum <= n; i--) 
        {
            stone += i;
            aliceWin ^= 1;
        }
        return aliceWin;
    }
};

