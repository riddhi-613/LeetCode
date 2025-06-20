class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(count !=0){
                    return count;
                }
                else{
                    continue;
                }
            }
            else if((s[i]<=90 && s[i]>=65) || (s[i]>=97 && s[i]<=122)){
                count++;
            }
        }
        return count;
    }
};