class Solution {
public:

    int num2str(int n){
        int count=0;
        while(n>0){
            int digit=n%2;
            if(digit==1)
            count++;
            n=n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int > ans;
        int count=0;
        for(int i=0;i<=n;i++){
            count=num2str(i);            
            ans.push_back(count);
            count=0;
        }
        return ans;

    }
};