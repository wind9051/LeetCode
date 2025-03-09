static const auto io_sync_off = [] {
    ios_base::sync_with_stdio(false);
    return true;
}();
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int, int>, int> point;
        for (auto &p : rectangles) {
            int x = p[0], y = p[1], a = p[2], b = p[3];
            if (++point[{x, y}] == 0) point.erase({x, y});
            if (--point[{x, b}] == 0) point.erase({x, b});
            if (++point[{a, b}] == 0) point.erase({a, b});
            if (--point[{a, y}] == 0) point.erase({a, y});
        }
        /*
        for (auto P : point) {
            cout<<"{"<<P.first.first<<","<<P.first.second<<"} "<<P.second<<endl;
        }
        cout<<point.begin()->second<<endl;
        */
        //[[0,0,4,1],[0,0,4,1]] point.begin()->second == 1
        return point.size() == 4 && point.begin()->second == 1;
    }
};
/*
    幾何 矩形
*/

