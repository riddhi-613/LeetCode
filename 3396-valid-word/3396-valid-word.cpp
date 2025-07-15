class Solution {
public:
    bool hasVowel(string word){
        int i=0;
        while(i<word.size()){
            if(word[i]>='0' && word[i]<='9'){
                continue;}
            else if((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z')){
                if(word[i]=='a' || word[i]=='e' || word[i]=='i'|| word[i]=='o' ||word[i]=='u' ||
                word[i]=='A' || word[i]=='E' || word[i]=='I'|| word[i]=='O' ||word[i]=='U' ){
                    return true;
                }
            }            
            i++;
        }
        return false;
    }
    bool hasConsonant(string word){
        int i=0;
        while(i<word.size()){
            if(word[i]>='0' && word[i]<='9'){
                continue;
            }else if((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z')){
            if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' &&   word[i]!='A' && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U') {
                    return true;
                }

             } i++;
        }return false;

    }

    bool isValid(string word) {
        int i=0;
        while(i<word.size()){
            if(!((word[i]>='0' && word[i]<='9') || 
                (word[i]>='a' && word[i]<='z') || 
                (word[i]>='A' && word[i]<='Z'))) {
                return false;
            }
            i++;
        }
        if(word.size()>=3 && hasVowel(word) && hasConsonant(word))
        return true;
        else 
        return false;
    }
};