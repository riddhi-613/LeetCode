class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>mpp;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    mpp.push_back({i,j});
                }
            }
        }   
        for(int i=0;i<mpp.size();i++){
            int row=mpp[i].first;
            int col=0;
            while(col<matrix[0].size()){
                matrix[row][col]=0;
                col++;
            }
            row=0;
            col=mpp[i].second;
            while(row<matrix.size()){
                matrix[row][col]=0;
                row++;
            }
        }
       
    }
};