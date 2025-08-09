class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> traversal;
        map<int,vector<int>> mpp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mpp[i+j].push_back(nums[i][j]);
            }
        }
        for(int i=0;i<mpp.size();i++){
            reverse(mpp[i].begin(),mpp[i].end());
        }
        for(int i=0;i<mpp.size();i++){
            for(int j=0;j<mpp[i].size();j++){
                traversal.push_back(mpp[i][j]);
            }
        }
        return traversal;
    }
};