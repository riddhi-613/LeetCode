class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        else{
            while(n>1){
                int digit=n%2;
                if(digit==1){
                    return false;
                }
                n=n/2;
            }
        }
        return true;
    }
};