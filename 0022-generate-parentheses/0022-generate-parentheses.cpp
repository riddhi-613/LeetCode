class Solution {
public:
    void generate(int open ,int close, vector<string> & output, string & ds,int n){
        if(open==n && close ==n){
            output.push_back(ds);
            return;
        }
        if(open<n){
            ds.push_back('(');
            generate(open+1,close,output,ds,n);
            ds.pop_back();
        }
        if(close<open){
            ds.push_back(')');
            generate(open,close+1,output,ds,n);
            ds.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string ds="";
        vector<string> output;
        generate(0,0,output,ds,n);
        return output;
    }
};