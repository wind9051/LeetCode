class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        this->arr = nums;
        
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i-k+1 >= 0 && i+k < n) {
                if (check(i-k+1, i) && check(i+1, i+k)) return 1;
            }
        }
        return 0;
    }
private:
    vector<int> arr;
    bool check(int left, int right) {
        for (int i = left+1; i <= right; i++) {
            if (arr[i-1] >= arr[i]) return false;
        }
        return true;
    }
};
