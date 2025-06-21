class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        if(matrix.size()==matrix[0].size()){
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<=i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
             return matrix;
        }
        else{
            vector<vector<int>> transposed_matrix;
            for(int i=0;i<matrix[0].size();i++){
                vector<int> row;
                for(int j=0;j<matrix.size();j++){
                    row.push_back(matrix[j][i]);
                }
                transposed_matrix.push_back(row);
            }
            return transposed_matrix;
        }
        return matrix;
       
    }
};