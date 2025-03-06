class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) 
    {
        for (int i = 0; i < 2; i++) {
            colors.push_back(colors[i]);
        }
                    
        int ans = 0;
        for (int i = 0; i < colors.size()-2; i++) {
            if (colors[i] == colors[i+2] and colors[i] != colors[i+1]) ans++;
        }
        return ans;
    }
};
/*
    Graph, 圖 圓環
*/
