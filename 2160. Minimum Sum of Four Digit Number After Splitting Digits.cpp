class Solution {
public:
    int minimumSum(int num) {
        vector<int> n;
        while (num) {
            n.push_back(num%10);
            num /= 10;
        }
        sort(begin(n), end(n));
        
        int n1 = n[0]*10+n[2], n2 = n[1]*10+n[3];
        return n1 + n2;
    }
};
