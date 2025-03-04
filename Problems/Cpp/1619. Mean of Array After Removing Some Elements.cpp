class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(begin(arr), end(arr));

        int len = arr.size();
        int rem = len / 10;
        int totalSum = accumulate(begin(arr)+rem/2, end(arr)-rem/2, 0);
        return (double)totalSum / (len - rem);
    }
};
