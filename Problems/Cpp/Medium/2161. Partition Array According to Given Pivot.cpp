class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, mid, right;
        
        for (int num : nums) {
            if (num < pivot) left.push_back(num);
            else if (num == pivot) mid.push_back(num);
            else right.push_back(num);
        }
        
        left.insert(left.end(), mid.begin(), mid.end());
        left.insert(left.end(), right.begin(), right.end());
        
        return left;
    }
};

/*
    Array, In place
*/
