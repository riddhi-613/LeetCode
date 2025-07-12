class Solution {
public:
    bool isPowerOfThree(int n) {
        bool isNeg=false;
        if(n>=INT_MAX || n<=INT_MIN){
            return false;
        }
        else if(n==1){
            return true;
        }
        else{
            if(n<=1){
                return false;
            }
            while(n>1){
                if(n%3!=0) return false;
                n=n/3;
            }
        }
        return true;
    }
};