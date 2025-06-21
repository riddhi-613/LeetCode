class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> occurances;
        for(int i=0;i<words.size();i++){
            for(int j=0;words[i][j];j++){
                if(x==words[i][j]){
                    occurances.push_back(i);
                    break;
                }
            }
        }
        return occurances;
    }
};