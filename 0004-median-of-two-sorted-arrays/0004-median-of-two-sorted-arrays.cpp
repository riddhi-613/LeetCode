class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       int ind1=0;
       int ind2=0;
       vector<int> temp;
       while(ind1<n1 && ind2<n2){
        if(nums1[ind1]<=nums2[ind2]){
            temp.push_back(nums1[ind1]);
            ind1++;
        }
        else{
            temp.push_back(nums2[ind2]);
            ind2++;
        }
       } 
       while(ind1<n1){
          temp.push_back(nums1[ind1]);
            ind1++;
       }
       while(ind2<n2){
        temp.push_back(nums2[ind2]);
            ind2++;
       }
       if(temp.size()%2==1){
        return (double)temp[temp.size()/2];
       }
         return (double)(temp[temp.size()/2]+temp[temp.size()/2-1])/2;
        
    }
};