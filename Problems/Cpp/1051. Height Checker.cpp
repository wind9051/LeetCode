class Solution {
public:
    int heightChecker(vector<int>& H) {
        vector<int> cnt(100+1);
        for (int i = 0; i < H.size(); i++) cnt[H[i]]++;

        int curH = 0, ans = 0;
        for (int i = 0; i < H.size(); i++) {
            while (!cnt[curH]) curH++;
            if (curH != H[i]) ans++;
            cnt[curH] --;
        }
        return ans;
    }
};
