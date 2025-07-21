class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common="";
        if(strs.size()==1) return strs[0];
        int minLength=min(strs[0].length(),strs[1].length());
        for(int i=0;i<minLength;i++){
            if(strs[0][i]!=strs[1][i]){
                break;
            }
            else{
                common.push_back(strs[0][i]);
            }
        }
        for (int i = 2; i < strs.size(); i++) {  
            minLength = min((int)common.length(), (int)strs[i].length());
            int j = 0;
            while (j < minLength && common[j] == strs[i][j]) {
                j++;
            }
            common = common.substr(0, j);
            if (common.empty()) return "";
        }
        return common;
    }
};