class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> hash;
        for (auto city : paths) hash.insert(city[0]);
        
        for (auto city : paths) {
            if (!hash.count(city[1])) return city[1];
        }
        
        return "";
    }
};
/*
    Graph, 圖
*/
