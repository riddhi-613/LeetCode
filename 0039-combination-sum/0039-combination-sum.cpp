class Solution {
public:
    void combine(vector<int> & candidates,vector<vector<int>> & combined, int ind,int n,vector<int> &row,int target){
            if(target==0){
                combined.push_back(row);
                return ;
            }
            if(target<0 || n==ind){
                return;
            }        
            row.push_back(candidates[ind]);
            combine(candidates,combined,ind,n,row,target-candidates[ind]);
            row.pop_back();
        
        combine(candidates,combined,ind+1,n,row,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> combined;
        vector<int>row;
        combine(candidates,combined,0,candidates.size(),row,target);
        return combined;
    }
};