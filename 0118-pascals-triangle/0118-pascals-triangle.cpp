class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> PascalTriangle;
        for(int i=0;i<numRows;i++){
            vector<int>rows;
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    rows.push_back(1);
                }
                else{
                    rows.push_back(PascalTriangle[i-1][j-1]+PascalTriangle[i-1][j]);
                }
            }
            PascalTriangle.push_back(rows);
        }
        return PascalTriangle;
    }
};