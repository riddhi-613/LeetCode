class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indexSub=0;
        for(int i=0;i<t.length();i++){
            if(t[i]==s[indexSub]){
                indexSub=indexSub+1;
            }
            if(indexSub-1==s.length()){
                break;
            }
        }
        if(indexSub==s.length()){
            return true;
        }
        return false;
    }
};