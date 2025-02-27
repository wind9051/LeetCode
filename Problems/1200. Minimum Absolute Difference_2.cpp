class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minE = *min_element(arr.begin(), arr.end());
        int maxE = *max_element(arr.begin(), arr.end());
        int shift = -minE;
        
        bitset<2000005> Hash;
        for (const int& n : arr) {
            Hash[n + shift] = 1;
        }

        int prev = 0;
        int minPairDiff = maxE - minE;

        vector<vector<int>> answer;
        for (int curr = 1; curr <= maxE + shift; curr++) {
            if (!Hash[curr]) continue;

            if (curr - prev == minPairDiff) {
                answer.push_back({prev - shift, curr - shift});

            } 
            else if (curr - prev < minPairDiff) {
                minPairDiff = curr - prev;
                answer = {{prev - shift, curr - shift}};
            }
            prev = curr;
        }
        return answer;
    }
};
