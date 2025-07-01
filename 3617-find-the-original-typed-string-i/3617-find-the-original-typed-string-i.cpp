class Solution {
public:
    int possibleStringCount(string word) {
        int possibleCount=1;
        for(int i=0;i<word.length()-1;i++){
            if(word[i]==word[i+1]){
                possibleCount++;
            }
        }
        return possibleCount;
    }
};