class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int freq=1;
        int i=0;
        while(i<nums.size()){
            freq=1;
            while(i+1<nums.size() && nums[i]==nums[i+1]){
                i++;
                freq++;
            }
            if(freq==1){
                sum+=nums[i];
               freq=1;
            }i++;
        }
        //if(nums.size()>1 && nums[nums.size()-1]!=nums[nums.size()-2])
        //sum=sum+nums[nums.size()-1];
        return sum;
    }
};