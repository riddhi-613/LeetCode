class Solution {
public:
    void subsetComp(int ind,vector<vector<int>> & powerSet, vector<int> & nums,vector<int> &row,int n){
        if(ind==n){
            powerSet.push_back(row);
            return;
        }
        row.push_back(nums[ind]);
        subsetComp(ind+1,powerSet,nums,row,n);
        row.pop_back();
        subsetComp(ind+1,powerSet,nums,row,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> row;
        subsetComp(0,powerSet,nums,row,nums.size());
        return powerSet;
    }
};