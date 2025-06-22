class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>>allCellsDistOrder;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                allCellsDistOrder.push_back({i,j});
            }
        }
        sort(allCellsDistOrder.begin(),allCellsDistOrder.end(), [&](const vector<int>& a, const vector<int>& b) {
    int d1 = abs(a[0] - rCenter) + abs(a[1] - cCenter);
    int d2 = abs(b[0] - rCenter) + abs(b[1] - cCenter);
    return d1 < d2;
});

        return allCellsDistOrder;
    }
};