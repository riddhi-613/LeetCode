class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>ans(temperatures.size());
        stack<int>st;
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            ans[i]=st.empty()? 0:st.top()-i;
            st.push(i);
        }
        return ans;
    }
};