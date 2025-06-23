class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergeStr;
        int indexStr1=0;
        int indexStr2=0;
        while(indexStr1<word1.length() && indexStr2<word2.length()){
            mergeStr.push_back(word1[indexStr1++]);
            mergeStr.push_back(word2[indexStr2++]);
        }
        while(indexStr1<word1.length()){
            mergeStr.push_back(word1[indexStr1++]);
        }
        while(indexStr2<word2.length()){
            mergeStr.push_back(word2[indexStr2++]);
        }
        return mergeStr;
    }
};