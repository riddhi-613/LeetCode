class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int basketIndex=0;
        int fruitIndex=0;
        vector<bool>placed (fruits.size(),false);
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(!placed[j] && fruits[i]<=baskets[j]){
                    placed[j]=true;
                    break;
                }
            }
        }
        int count=0;
        for(int i=0;i<placed.size();i++){
            if(placed[i]!=true) count++;
        }
        return count;
    }
};