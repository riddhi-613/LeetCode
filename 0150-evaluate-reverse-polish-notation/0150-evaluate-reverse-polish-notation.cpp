class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-"){
                 if(st.size()<2) return 0;
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(tokens[i]=="+") st.push(a+b);
                else if(tokens[i]=="-") st.push(a-b);
                else if(tokens[i]=="*") st.push(a*b);
                else if(tokens[i]=="/") {
                    if(b==0) st.push(0);
                    else st.push(a/b);
                }
            }else{
               int num=stoi(tokens[i]);
                st.push(num);
            }
        }
        if(st.empty()) return 0;
        //if (st.size() != 1) return 0;
        return st.top();
    }
};