class Solution {
public:
    static bool cmp (int & a, int & b) {
        return a > b;
    }

    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.begin(), capacity.end(), cmp);

        int count = 0, now = 0;
        for (auto n : capacity) {
            if (sum <= now) break;
            count++; now += n;
        }
        return count;
    }
};
