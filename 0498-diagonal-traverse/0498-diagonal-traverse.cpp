class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> traversal;
        int row=0;
        int col=0;
        int m=mat.size();
        int n=mat[0].size();
        while(traversal.size()<m*n ){
            while(row>=0 && col<mat[0].size()){
                traversal.push_back(mat[row][col]);
                row--;
                col++;
            }
            
            if(col>=mat[0].size()) {
                col-=1;
                row+=2;
            }
            if(row<0) row=0;
            while(row<mat.size() && col>=0){
                traversal.push_back(mat[row][col]);
                row++;
                col--;
            }
            if(row>=mat.size()) {
                row-=1;
                col+=2;
            }
            if(col<0) col=0;
        }
        return traversal;
    }
};