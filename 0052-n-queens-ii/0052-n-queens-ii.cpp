class Solution {
public:

    int solve (int col,vector<string> & board,vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal ,int n, int count){
        if(col==n){
            return 1;
        }
        count=0;
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && upperDiagonal[n-1+col-row]==0 && lowerDiagonal[row+col]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                upperDiagonal[n-1+col-row]=1;
                lowerDiagonal[row+col]=1;
                count+=solve(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n,count);
                board[row][col]='.';
                leftRow[row]=0;
                upperDiagonal[n-1+col-row]=0;
                lowerDiagonal[row+col]=0;
                }
        }
        return count;
    }
    int totalNQueens(int n) {
        vector<int> leftRow(n,0);
        vector<int>upperDiagonal(2*n-1,0);
        vector<int>lowerDiagonal (2*n-1,0);
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        int count=0;
        int counter=solve(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n,count);
        return counter;
    }
};