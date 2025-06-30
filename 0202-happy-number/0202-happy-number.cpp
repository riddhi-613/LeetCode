class Solution {
public:
    bool isHappy(int n) {
        bool isHappyNum=false;
        int num=0;
        while(isHappyNum !=true){
            while(n>0){
                int digit=n%10;
                num=num+pow(digit,2);
                n=n/10;
            }
            if(num==1){
                isHappyNum=true;
            }
            else{
                n=num;
                num=0;
                if(n<5){
                    return false;
                }
            }
        }
        return isHappyNum;
    }
};