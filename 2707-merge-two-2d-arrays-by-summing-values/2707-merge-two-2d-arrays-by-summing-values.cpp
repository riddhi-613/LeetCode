class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> mergedArray;
        int index1=0;
        int index2=0;
        while(index1<nums1.size() && index2<nums2.size()){
            if(nums1[index1][0]==nums2[index2][0]){
                mergedArray.push_back({nums1[index1][0],nums1[index1][1]+nums2[index2][1]});
                index1++;
                index2++;
            }
            else if(nums1[index1][0]<nums2[index2][0]){
                mergedArray.push_back({nums1[index1][0],nums1[index1][1]});
                index1++;
            }
            else if(nums1[index1][0]>nums2[index2][0]){
                mergedArray.push_back({nums2[index2][0],nums2[index2][1]});
                index2++;
            }
        }  
        while(index1<nums1.size()){
            mergedArray.push_back({nums1[index1][0],nums1[index1][1]});
                index1++;
        } 
        while(index2<nums2.size()){
            mergedArray.push_back({nums2[index2][0],nums2[index2][1]});
                index2++;
        }  
        return mergedArray;  
    }
};