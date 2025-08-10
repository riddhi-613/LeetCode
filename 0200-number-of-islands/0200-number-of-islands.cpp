class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands=0;
        vector<pair<int,int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    islands++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j]='0';
                    while(!q.empty()){
                        int row=q.front().first;
                        int col=q.front().second;
                        q.pop();
                        for(auto it: directions){
                            int newRow=it.first+row;
                            int newCol=it.second+col;
                            if(newRow>=0 && newRow<grid.size() && newCol>=0 && newCol<grid[0].size() && grid[newRow][newCol]=='1'){
                                q.push({newRow,newCol});
                                grid[newRow][newCol]='0';
                            }
                        }
                    }
                }
            }
        }
        return islands;
        
    }
};