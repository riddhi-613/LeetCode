class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countPos=0;
        int countNeg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                countNeg++;
            }
            else if(nums[i]>0){
                countPos++;
            }
        }
        return countPos>countNeg ? countPos:countNeg;
    }
};