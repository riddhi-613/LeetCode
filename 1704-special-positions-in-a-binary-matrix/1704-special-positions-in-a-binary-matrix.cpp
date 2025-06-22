class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    int indexRow=i;
                    bool flag=true;
                    for(int k=0;k<mat.size();k++){
                        if(k!=i && mat[k][j]!=1){
                        }else if(k!=i && mat[k][j]==1){
                            flag=false;
                        }
                    }
                    if(flag){
                        int indexCol=j;
                        for(int x=0;x<mat[0].size();x++){
                            if(x!=j && mat[i][x]==0){
                        }else if(x!=j && mat[i][x]==1){
                            flag=false;
                        }
                        }
                    }
                    if(flag){
                        count++;
                    }

                }
            }
        }
        return count;
    }
};