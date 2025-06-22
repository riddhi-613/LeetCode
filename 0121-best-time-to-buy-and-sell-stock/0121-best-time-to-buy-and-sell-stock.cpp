class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;int min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
            }
            if(prices[i]-min>=0 && maxProfit<prices[i]-min)
            maxProfit=prices[i]-min;
        }
        return maxProfit;
    }
};