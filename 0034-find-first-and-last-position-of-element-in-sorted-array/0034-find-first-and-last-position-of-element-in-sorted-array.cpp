class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> range;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                range.push_back(i);
                break;
            }
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                range.push_back(nums.size()-i-1);
                break;
            }
        }
        if(range.empty())
        return {-1,-1};

        return range;
    }
};