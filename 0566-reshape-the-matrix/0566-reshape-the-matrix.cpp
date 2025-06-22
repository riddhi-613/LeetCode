class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int numRows=mat.size();
        int numCols=mat[0].size();
        if(r*c==numRows*numCols){
            vector<int> flatten;
            for(int i=0;i<numRows;i++){
                for(int j=0;j<numCols;j++){
                    flatten.push_back(mat[i][j]);
                }
            }
            int k=0;
            vector<vector<int>> transformedMat;
            for(int i=0;i<r;i++){
                vector<int>rows;
                for(int j=0;j<c;j++){
                    rows.push_back(flatten[k]);
                    k++;
                }
                transformedMat.push_back(rows);
            }
            return transformedMat;
        }
        else
        return mat;
    }
};