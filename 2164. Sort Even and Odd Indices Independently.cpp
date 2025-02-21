class Solution {
public:
    static bool cmp (int & a, int & b) {
        return a > b;
    }

    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd, even;
        for (int i = 0; i < nums.size(); i++) {
            if (i & 1) odd.push_back(nums[i]);
            else even.push_back(nums[i]);
        }
        sort(odd.begin(), odd.end(), cmp);
        sort(even.begin(), even.end());

        for (int i = 0; i < nums.size(); i++) {
            if(i & 1) {
                nums[i] = odd.front();
                odd.erase(odd.begin());
            } 
            else {
                nums[i] = even.front();
                even.erase(even.begin());
            }
        }
        return nums;
    }
};
