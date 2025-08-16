class Solution {
public:
    int maximum69Number (int num) {
        vector<int> number;
        int num1=num;
        while(num1>0){
            int digit=num1%10;
            number.push_back(digit);
            num1=num1/10;
        }
        reverse(number.begin(),number.end());
        int ans=0;
        int index=0;
        bool flag=false;
        for(int i=0;i<number.size();i++){
            if(number[i]==9){
                ans=ans*10+number[i];
            }else{
                number[i]=9;
                ans=ans*10+number[i];
                index=i;
                flag=true;
                break;
            }
        }
        if(flag==false) return num;
        
        for(int i=index+1;i<number.size();i++){
            ans=ans*10+number[i];
        }
        return ans;
    }
};