class Solution {
public:
    void combine(vector<vector<int>> & combinedSum,vector<int> &candidates,int ind,int n , vector<int> &row, int target){
        if(target==0){
           combinedSum.push_back(row); 
           return ;
        }
        for(int i=ind;i<n;i++){
            if(i>ind && candidates[i]==candidates[i-1]) {
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            row.push_back(candidates[i]);
            combine(combinedSum,candidates,i+1,n,row,target-candidates[i]);
            row.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> combinedSum;
        vector<int>row;
        sort(candidates.begin(),candidates.end());
        combine(combinedSum,candidates,0,candidates.size(),row,target);
        return combinedSum;
    }
};