class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count=1;
        int maxFreq=0;
        sort(arr.begin(),arr.end());
        if(arr[0]==1 && arr.size()==1){
            return 1;
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                count++;
            }
            else{
                if(count==arr[i-1]){
                    if(maxFreq<=arr[i-1]){
                        maxFreq=arr[i-1];
                    }
                }
                count=1;
            }
        }
         if (count == arr[arr.size() - 1]) {
             maxFreq = max(maxFreq, arr[arr.size() - 1]);
            }
        if(maxFreq!=0){
            return maxFreq;
        }
        return -1;
    }
};