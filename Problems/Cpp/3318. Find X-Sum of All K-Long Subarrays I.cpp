class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        
        unordered_map<int, int> freq;
        for (int i = 0; i < k; i++) freq[nums[i]]++;

        vector<int> res;
        res.push_back(calXSum(freq, x));
        
        for (int i = 1; i <= n - k; i++) {
            freq[nums[i - 1]]--;
            freq[nums[i + k - 1]]++;

            res.push_back(calXSum(freq, x));
        }
        return res;
    }

private:
    int calXSum(unordered_map<int, int>& freq, int x) {
        priority_queue<pair<int, int>> pq;
        for (auto& [k, v] : freq) pq.push({v, k});

        int sum = 0;
        for (int i = 0; i < x && !pq.empty(); i++) {
            auto now = pq.top(); pq.pop();
            sum += now.second * now.first; // sum = value * frequency
        }
        return sum;
    }
};
/*
    Hash, PQ 哈希 優先佇列
*/
