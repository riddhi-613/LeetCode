class Solution {
public:
    void generate(int ind,vector<vector<int>> &output, vector<int> & ds, int k, int target,int sum){
        if(ds.size()==k){
            if(target==0){
                output.push_back(ds);
            }return;

        }
        for(int i=1;i<=9;i++){
            //if(i>ind && ds[i]==ds[i-1]) continue;
            if(i<=ind) continue;
            if(i>target) return;
            ds.push_back(i);
            generate(i,output,ds,k,target-i,sum+i);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> output;
        generate(0,output,ds,k,n,0);
        return output;
    }
};