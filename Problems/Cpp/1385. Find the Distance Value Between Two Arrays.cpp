class Solution {
public:
    bool bs(vector<int>& num, int & L, int & R) {
        int l = 0, r = num.size()-1;
        while (l <= r) {
            int m = l + (r-l)/2;
            //num−d <= y <= num+d
            if (num[m] >= L && num[m] <= R) return 1;
            if (num[m] < L) l = m+1;
            if (num[m] > R) r = m-1;
        }
        return 0;
    }
    
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        
        int cnt = 0;
        for (int & n : arr1) {
            int L = n - d;
            int R = n + d;
            if (!bs(arr2, L, R)) cnt++;
        }
        return cnt;
    }
};

/*
    BS, 二元搜尋
    num−d<=y<=num+d
*/
