class NumArray {
public:
    NumArray(vector<int> &nums) {
        sumN.push_back(0);
        for (int n : nums) {
            sumN.push_back(sumN.back() + n);
        }
    }

    int sumRange(int i, int j) {
        return sumN[j+1] - sumN[i];
    }
private:
    vector<int> sumN;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2); 
/*
    Prefix, 前綴, 結構
*/
