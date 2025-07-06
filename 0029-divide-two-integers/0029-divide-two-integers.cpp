class Solution {
public:
    int divide(int dividend, int divisor) {
        int count=0;
        if(dividend>=INT_MAX && divisor==1){
            return INT_MAX;
        }
        else if (dividend<=INT_MIN && divisor==1){
            return INT_MIN;
        }
        else if(dividend>=INT_MAX && divisor==-1){
            return INT_MIN+1;
        }
        else if(dividend<=INT_MIN && divisor==-1){
            return INT_MAX;
        }
        else{
            long long dividend1=(long long)dividend;
            long long divisor1=(long long)divisor;
                if(dividend1>0 && divisor1>0){
                while(dividend1>=divisor1){
                    dividend1-=divisor1;
                    count++;
                }
            }
            else if(dividend1>0 && divisor1<0){
                divisor1=-divisor1;
                while(dividend1>=divisor1){
                    dividend1-=divisor1;
                    count--;
                }
            }
            else if(dividend1<0 && divisor1<0){
                dividend1=-dividend1;
                divisor1=-divisor1;
                while(dividend1>=divisor1){
                    dividend1-=divisor1;
                    count++;
                }
            }
            else if(dividend1<0 && divisor1>0){
                dividend1=-dividend1;
                while(dividend1>=divisor1){
                    dividend1-=divisor1;
                    count--;
                }
            }
        }
        
        return count;
    }
};