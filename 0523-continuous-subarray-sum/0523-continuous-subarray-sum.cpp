class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        long long  prefixSum=0;
        int count=0;
        mpp[0]=-1;
        if(k==0){
            for (int i = 0; i < nums.size()-1; i++){
                if (nums[i] == 0 && nums[i+1] == 0) return true;
                else{
                    continue;
                }
            }
            return false;
        }
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int remove=((prefixSum % k) + k) % k;
            if(mpp.find(remove)!=mpp.end()){
                if(i-mpp[remove]>=2){
                    return true;
                }
            }
            else{
                    mpp[remove]=i;
                }
        }
        return false;
    }
};