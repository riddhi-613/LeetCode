class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int index=0;
        vector<int> resultingArray;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                resultingArray.push_back(nums[i]);
                index++;
            }
        }
        while(index<nums.size()){
            resultingArray.push_back(0);
            index++;
        }
        return resultingArray;
    }
};