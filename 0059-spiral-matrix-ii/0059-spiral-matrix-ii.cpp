class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix (n,vector<int> (n) );
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int number=1;
        while(top<=bottom && left<=right){
            int col=left;
            while(col<=right){
                matrix[top][col++]=number++;
            }
            top+=1;
            int row=top;
            while(row<=bottom){
                matrix[row++][right]=number++;
            }
            right-=1;
            col=right;
            if(bottom>=top){
                while(left<=col){
                    matrix[bottom][col--]=number++;
                }
                bottom--;
            }
            row=bottom;
            if(left<=right){
                while(row>=top){
                    matrix[row--][left]=number++;
                }
                left++;
            }
        }
        return matrix;
    }
};