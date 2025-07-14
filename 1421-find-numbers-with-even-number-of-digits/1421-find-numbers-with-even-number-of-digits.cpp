class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenCount=0;
        for(int i=0;i<nums.size();i++){
            int isEven=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                isEven++;
            }
            if(isEven%2==0){
                evenCount++;
            }
        }
        return evenCount;
    }
};