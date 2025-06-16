class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket1;
        for(int i=0; s[i];i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                bracket1.push(s[i]);
            }
            else{
                if(bracket1.empty()) return false;

                if((s[i]==')' && bracket1.top()=='(') ||
                    (s[i]==']' && bracket1.top()=='[')||
                    (s[i]=='}' && bracket1.top()=='{'))
                    {
                        bracket1.pop();
                    }
                    else{
                        return false;
                    }
            }
        }
        if(bracket1.empty() ){
            return true;
        }
        return false;
    }
};