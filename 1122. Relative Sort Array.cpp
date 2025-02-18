class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    
        vector<int> cnt(1005, 0);
        for (int i = 0; i < arr1.size(); i++) cnt[arr1[i]]++;
        
        vector<int> ans;
        for (int i = 0; i < arr2.size(); i++) {
            while (cnt[arr2[i]]) {
                ans.push_back(arr2[i]);
                cnt[arr2[i]]--;
            }
        }
        
        int now = 0;
        while (now <= 1000) {
            
            while (!cnt[now] && now <= 1000) now++;
            if (now == 1001) break;
            
            while (cnt[now]) {
                ans.push_back(now);
                cnt[now]--;
            }
        }
        
        return ans;
    }
};
