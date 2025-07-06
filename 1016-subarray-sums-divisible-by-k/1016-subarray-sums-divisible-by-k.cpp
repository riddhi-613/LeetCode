class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        map<int,int> mpp;
        mpp[0]=1;
        int prefixSum=0;
        for(int i=0;i<nums.size();i++){
          prefixSum+=nums[i];
          int remove=((prefixSum%k)+k)%k;
            count+=mpp[remove];
            mpp[remove]+=1;
        }
        return count;
    }
};