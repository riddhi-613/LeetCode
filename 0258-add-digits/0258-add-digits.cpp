class Solution {
public:
    int addDigits(int num) {
        bool isSingle=false;
        int nsum=0;
        if(num>=0 && num<10){
            return num;
        }
        while(isSingle!=true){
            while(num>0){
                int digit=num%10;
                nsum=nsum+digit;
                num=num/10;
            }
            if(nsum>0 && nsum<10){
                    isSingle=true;
                }
            else{
                num=nsum;
                nsum=0;
            }
            
        }
        return nsum;
    }
};