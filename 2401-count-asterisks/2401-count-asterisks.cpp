class Solution {
public:
    int countAsterisks(string s) {
        int countBar=0;
        int countAest=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                countBar++;
            }
            else if(countBar==0 && s[i]=='*'){
                countAest++;
            }
            if(countBar==2){
                countBar=0;
            }
        }
        return countAest;
    }
};