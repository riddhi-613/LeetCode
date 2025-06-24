class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> indices;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)<=k && nums[j]==key){
                indices.push_back(i);
                break;
                }
            }
        }
        sort(indices.begin(),indices.end());
        return indices;
    }
};