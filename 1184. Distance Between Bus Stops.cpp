class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int LC = 0, RC = 0;
        if (start > destination) swap(start, destination);
        
        for (auto i = 0; i < distance.size(); i++) {
            if (i >= start && i < destination) LC += distance[i];
            else RC += distance[i];
        }
        return min(LC, RC);
    }
};
