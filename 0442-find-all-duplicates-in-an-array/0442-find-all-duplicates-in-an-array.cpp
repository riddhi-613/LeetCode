class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> duplicates;
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1 && nums[i]==nums[i+1])
            duplicates.push_back(nums[i]);
        }
        return duplicates;
    }
};