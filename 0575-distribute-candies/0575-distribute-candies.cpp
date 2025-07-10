class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int candiesAllowed=candyType.size()/2;
        int count=0;
        sort(candyType.begin(),candyType.end());
        candyType.erase(unique(candyType.begin(),candyType.end()),candyType.end());
        for(int i=0;i<candyType.size();i++){
            if(i<candiesAllowed){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};