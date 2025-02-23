class Solution {
public:
    bool areNumbersAscending(string s) {
        s+=' ';
        string num = "";
        vector<int> N;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) num+=s[i];
            else {
                if (num != "") N.push_back(stoi(num));
                num = "";
            }
        }
        
        for (int i = 0; i < N.size()-1; i++) {
            if (N[i] >= N[i+1]) return 0;
        } 
        return 1;
    }
};
