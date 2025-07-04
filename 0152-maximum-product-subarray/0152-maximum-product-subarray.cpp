class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int finalProd=nums[0];
        int maxProd=nums[0];
        int minProd=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=0){
                swap(minProd,maxProd);
            }
                maxProd=max(nums[i],maxProd*nums[i]);
                minProd=min(nums[i],minProd*nums[i]);
            finalProd=max(finalProd,maxProd);
            //finalProd=max(finalProd,minProd);
        }
        return finalProd;
    }
};