class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool allFlowersPlanted=false;
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n==1 || flowerbed[0]==1 && n==0){
                return true;
            }
            else{
                return false;
                
            }
        }
        for(int i=0;i<flowerbed.size();i++){
            if(i<flowerbed.size()-1 && flowerbed[0]==0 && flowerbed[1]==0){
                n--;
                flowerbed[i]=1;
                if(n==0)
                break;
                i++;
            }
            else if(flowerbed[i]==1){
                i++;
            }
            else if(flowerbed[i]==0 && i<flowerbed.size()-1  && i!=0){
                if(flowerbed[i+1]==0 && flowerbed[i-1]==0){
                    flowerbed[i]=1;
                    n--;
                    if(n==0)
                    break;
                    i++;
                }                
            }else if(i==flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i]==0){
                n--;
                if(n==0)
                break;
            }
        }
        if(n==0){
            allFlowersPlanted=true;
        }
        return allFlowersPlanted;
    }
};