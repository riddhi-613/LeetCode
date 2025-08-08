class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int decreaseCheck=0;
        int first=0;
        int second=0;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
               first=i-1;
               second=nums.size()-1;
               while(nums[second]<=nums[first]){
                second--;
               }
               swap(nums[first],nums[second]);
               reverse(nums.begin() + first + 1, nums.end());
               break;
            }else{
                decreaseCheck+=1;
            }
        }
        if(decreaseCheck==nums.size()-1){
            reverse(nums.begin(),nums.end());
        }
    }
};