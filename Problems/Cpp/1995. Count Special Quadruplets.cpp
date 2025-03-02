class Solution {
public:
    //a+b+c=d
    int countQuadruplets(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int, int> hash;
        for (int i = 1; i < nums.size(); i++) {
            //nums[a] + nums[b]
            for (int j = 0; j < i; j++) {
                hash[nums[i]+nums[j]]++;
            }
            
            //nums[d] - nums[c] 
            for (int k = i+2; k < nums.size(); k++){
                cnt += hash[nums[k]-nums[i+1]];
            }
        }
        return cnt;
    }
};

/*
    Math, Hash, 哈希, 數學
*/
