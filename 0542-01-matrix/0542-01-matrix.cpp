class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> updated(mat.size(), vector<int> (mat[0].size(),-1));
        queue<pair<int,int>> mpp;
        vector<pair<int,int>> directions={{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    mpp.push({i,j});
                    updated[i][j]=0;
                }
            }
        }
        while(!mpp.empty()){
            int row=mpp.front().first;
            int col=mpp.front().second;
            mpp.pop();
            for(auto it:directions){
                int newRow=row+it.first;
                int newCol=col+it.second;
                if(newRow >= 0 && newRow < mat.size() && newCol >= 0 && newCol < mat[0].size() && updated[newRow][newCol] == -1){
                    updated[newRow][newCol] = updated[row][col] + 1;
                    mpp.push({newRow, newCol});
                }
            }
        }
       return updated;
    }
};