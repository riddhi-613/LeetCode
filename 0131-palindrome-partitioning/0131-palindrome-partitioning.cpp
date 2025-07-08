class Solution {
public:
    bool isPalindrome(string &s, int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
    void generate(int ind, vector<vector<string>> & res, vector<string> &ds,string s){
        if(ind==s.size()){
            res.push_back(ds);
            return ;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                generate(i+1,res,ds,s);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> res;
        generate(0,res,ds,s);
        return res;
    }
};