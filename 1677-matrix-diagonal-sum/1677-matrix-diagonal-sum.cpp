class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int diagSum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    diagSum=diagSum+mat[i][j];
                }else if(i+j==mat.size()-1){
                    diagSum=diagSum+mat[i][j];
                }
            }
        }
        return diagSum;
    }
};