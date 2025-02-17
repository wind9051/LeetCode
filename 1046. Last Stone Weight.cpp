class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> Q;
        for (auto & n : stones) Q.push(n);
        
        while (Q.size() != 1) {
            int n1 = Q.top(); Q.pop();
            int n2 = Q.top(); Q.pop();
            Q.push(n1 - n2);
        }
        return Q.top();
    }
};
