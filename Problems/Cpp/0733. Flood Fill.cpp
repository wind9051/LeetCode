class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int currColor = image[sr][sc];
        if (currColor == color) return image;
        
        int n = image.size(), m = image[0].size();
        
        queue<pair<int, int>> Q;
        Q.push({sr, sc});

        image[sr][sc] = color;
        while (!Q.empty()) {
            int x = Q.front().first; 
            int y = Q.front().second; Q.pop();
            for (int i = 0; i < 4; i++) {
                int mx = x + dx[i];
                int my = y + dy[i];
                if (mx >= 0 && mx < n && my >= 0 && my < m && image[mx][my] == currColor) {
                    Q.push({mx, my});
                    image[mx][my] = color;
                }
            }
        }
        return image;
    }
private:
    const vector<int> dx = {1, 0, 0, -1};
    const vector<int> dy = {0, 1, -1, 0};
};
/*
    Matrix, 矩陣, BFS
*/
