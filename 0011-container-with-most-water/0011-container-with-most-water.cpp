class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxWater=0;
        int water=0;
        while(left<right){
            if(height[left]<height[right]){
                water=height[left]*(right-left);
                left++;
            }else{
                water=height[right]*(right-left);
                right--;
            }
            maxWater=max(maxWater,water);
        }
        return maxWater;
    }
};