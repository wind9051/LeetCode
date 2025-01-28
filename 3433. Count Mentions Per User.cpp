class Solution {
public:
    static bool cmp(vector<string>& a,vector<string>& b){
        if (a[1] == b[1]) {
            return a[0] == "OFFLINE";
        }
        return stoi(a[1]) < stoi(b[1]);
    }

    vector<int> countMentions(int n, vector<vector<string>>& events) {
        int all=0;
        vector<int> res(n,0);
        queue<pair<int,int>> q;
        sort(events.begin(), events.end(), cmp);

        for (auto v : events) {
            int timeStamp = stoi(v[1]);
            //event = OFFLINE / MESSAGE
            if (v[0] == "OFFLINE") {
                //Q = ID, timeStamp
                q.push({stoi(v[2]), stoi(v[1])});
            }
            else {
                if (v[2] == "ALL") {
                    all++;
                }
                else if (v[2] == "HERE") {
                    while(!q.empty() && q.front().second + 60 <= timeStamp) q.pop();
                    all++;

                    for (int i = 0; i < q.size(); i++) {
                        auto f = q.front(); q.pop();
                        res[f.first]--;
                        q.push(f);
                    }
                }
                else {
                    string id;
                    stringstream ss(v[2]);
                    while (ss >> id) {
                        res[stoi(id.substr(2, id.size()))]++;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            res[i] += all;
        }
        return res;
    }
};
