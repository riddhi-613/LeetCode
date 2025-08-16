class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
             if (temp.size() < 2 || nums[i] != temp[temp.size()-2]) {
                temp.push_back(nums[i]);
            }
        }
        nums=temp;
        return temp.size();
    }
};