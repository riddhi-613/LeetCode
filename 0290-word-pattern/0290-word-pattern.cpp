class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mpp;
        map<string,char> rev; 
        string temp="";
        int index=0;
        for( int i=0;i<s.length();i++){
            if(index >= pattern.size()) return false; 
            if(s[i]!=' '){
                temp+=s[i];
            }else{
                if(mpp.find(pattern[index])!=mpp.end()){
                    if(temp!=mpp[pattern[index]]) return false;
                }else{
                    if(rev.find(temp)!=rev.end()) return false;
                    mpp[pattern[index]]=temp;
                    rev[temp] = pattern[index];
                }
                temp="";
                index++;
            }
        }
        // Process the last word (since it won't be followed by a space)
        if (index >= pattern.size()) return false;

        char pChar = pattern[index];
        if (mpp.find(pChar) != mpp.end()) {
            if (temp != mpp[pChar]) return false;
        } else {
            if (rev.find(temp) != rev.end()) return false;
            mpp[pChar] = temp;
            rev[temp] = pChar;
        }

        index++;

        // Final check: both pattern and word count must match
        return index == pattern.size();
    }
};