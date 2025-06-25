class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long n1=n;
        if(n==0){
            return 1;
        }
        else{
            bool isNegative=false;
            if(n1<0){
                isNegative=true;
                n1=-n1;
            }            
            while (n1>0){
                if(n1%2==0){
                    x=x*x;
                    n1=n1/2;
                }
                if(n1%2==1){
                ans=ans*x;
                n1--;
                }
            }
            if(isNegative==false){
                return ans;
            }
            else{
                ans=1/ans;
            }
        }
        return ans;
    }
};