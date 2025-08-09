class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> rotten;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)
                rotten.push({i,j});
            }
        }
        int count=0;
        vector<pair<int,int>> dirs={{1,0}, {-1,0}, {0,1}, {0,-1}};
        while(!rotten.empty()){
            int size=rotten.size();
            bool infected=false;

            for(int i=0;i<size;i++){
                int row=rotten.front().first;
                int col=rotten.front().second;
                rotten.pop();
                for(auto dir:dirs){
                    int newRow=row+dir.first;
                    int newCol=col+dir.second;
                    if(newRow>=0 && newRow<grid.size() && newCol>=0 && newCol<grid[0].size()){
                        if (grid[newRow][newCol] == 1) { 
                            grid[newRow][newCol] = 2; 
                            rotten.push({newRow, newCol});
                            infected=true;
                        }
                    }
                }
            }
            if(infected==true) count++;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                return -1;
            }
        }
        return count;
    }
};