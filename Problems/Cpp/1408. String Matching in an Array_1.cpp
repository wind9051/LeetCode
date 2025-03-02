class Solution {
public:
    static bool cmp(string & x, string & y) {
         return x.size() < y.size();
    }
    
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        
        vector<string> ret;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i+1; j < words.size(); j++) {
                //cout<<words[j].find(words[i])<<endl;
                if (words[j].find(words[i]) != std::string::npos) {
                    ret.push_back(words[i]);
                    break;
                }
            }
        }
        
        return ret;
    }
};
