class Solution {
public:
void subsetComp(int ind,vector<vector<int>> & powerSet, vector<int> & nums,vector<int> &row,int n){
            powerSet.push_back(row);
        for(int i=ind;i<n;i++){
            if (i > ind && nums[i] == nums[i - 1]) continue;
            row.push_back(nums[i]);
            subsetComp(i+1,powerSet,nums,row,n);
            row.pop_back();
        }
        
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> row;
        sort(nums.begin(),nums.end());
        subsetComp(0,powerSet,nums,row,nums.size());
        powerSet.erase(unique(powerSet.begin(),powerSet.end()),powerSet.end());
        return powerSet;
    }
};