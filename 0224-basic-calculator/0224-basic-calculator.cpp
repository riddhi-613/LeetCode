class Solution {
public:
    int priority(char ch){
        if(ch == '-' || ch == '+') return 1;

        else return -1;
    }

    string infixToPostfix(string s){
        string ans = "";
        int i = 0;
        stack<char> st;
        while(i < s.length()){
            if(s[i] >= '0' && s[i] <= '9'){
                while(i < s.length() && s[i] >= '0' && s[i] <= '9') {
                    ans += s[i++];
                }
                ans += ' ';
                continue;                  
            } else if(s[i] == ' ') {
                i++;
                continue;
            }else if(s[i]=='('){
                st.push(s[i]);
            }else if (s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    ans+=' ';
                    st.pop();
                }
                st.pop();
            }else if(s[i]=='+' || s[i]=='-'){
                if(i==0) {
                    ans+='0';
                    ans+=' ';
                }else{
                    int prev=i-1;
                    while(prev>=0 && s[prev]==' '){
                        prev--;
                    }
                    if(s[prev]=='(' || s[prev]=='+' || s[prev]=='-'){
                        ans+='0';
                        ans+=' ';
                    }
                }
                while(!st.empty() && priority(s[i]) <= priority(st.top())){
                    ans += st.top(); ans += ' ';
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            ans += st.top(); ans += ' ';
            st.pop();
        }
        return ans;
    }

    int calculate(string s) {
        string postFix = infixToPostfix(s);
        stack<int> st;
        int i = 0;
        while(i < postFix.length()){
            if(postFix[i] == ' '){
                i++;
                continue;
            }

            if(isdigit(postFix[i])){
                int num = 0;
                while(i < postFix.length() && isdigit(postFix[i])){
                    num = num * 10 + (postFix[i] - '0');
                    i++;
                }
                st.push(num);
                continue;
            } else {
                if(st.size() < 2) return 0;  // safeguard

                int num1 = st.top(); st.pop();
                int num2 = st.top(); st.pop();

                if(postFix[i] == '+') st.push(num2 + num1);
                else if(postFix[i] == '-') st.push(num2 - num1);
            }
            i++;
        }
        return st.empty() ? 0 : st.top();
    }
};
