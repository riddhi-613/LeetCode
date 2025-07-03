class Solution {
public:

    string num2str(string str , int n){
        while(n>0){
            int digit=n%2;
            str.push_back(digit+'0');
            n=n/2;
        }
        return str;
    }
    vector<int> countBits(int n) {
        vector<int > ans;
        int count=0;
        for(int i=0;i<=n;i++){
            string str="";
            str=num2str(str,i);
            int ind=0;
            while(ind<str.length()){
                if(str[ind]=='1')
                count++;
                ind++;
            }
            ans.push_back(count);
            count=0;
        }
        return ans;

    }
};