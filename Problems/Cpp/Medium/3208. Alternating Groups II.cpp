class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        for (int i = 0; i < k - 1; i++) {
            colors.push_back(colors[i]);
        }

        int l = colors.size();
        int result = 0;
        int L = 0, R = 1;

        while (R < l) {
            if (colors[R] == colors[R - 1]) {
                L = R;
                R++;
                continue;
            }
            R++;
            
            if (R - L == k) {
                result++;
                L++;
            }
        }
        return result;
    }
};
/*
  Tow pointer
*/
