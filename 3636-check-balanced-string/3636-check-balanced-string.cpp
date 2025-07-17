class Solution {
public:
    bool isBalanced(string num) {
        int oddSum=0;
        int evenSum=0;
        for(int i=0;i<num.size();i=i+2){
            evenSum+=num[i]-'0';
        }
        for(int i=1;i<num.size();i=i+2){
            oddSum+=num[i]-'0';
        }
        if(evenSum==oddSum) return true;
        return false;
    }
};