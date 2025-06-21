class Solution {
public:
    string triangleType(vector<int>& nums) {
        // for equilateral
        if(nums[0]==nums[1] && nums[1]==nums[2]){
            return "equilateral";
        }
        bool flag=true;
        for(int i=0;i<nums.size();i++){
            if(nums[(i)%3]+nums[(i+1)%3]<=nums[(i+2)%3]){
                flag=false;
            }
        }
        if(flag==true){
            if(nums[0]==nums[1] || nums[1]==nums[2] || nums[2]==nums[0] ){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
        else
        return "none";
    }
};