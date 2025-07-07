class Solution {
public:
void generate(int count1, int count0,vector<string> & output, string &ds, int n ){
    if(ds.length()==n){
        int i=0;
        bool flag=true;
        while(i+1<ds.length()){
            if(ds[i]=='0' && ds[i+1]=='0')
            flag=false;
            i++;
        }
        if(flag==true)
        output.push_back(ds);
        return ;
    }
    if(count1<n){
        ds.push_back('1');
        generate(count1+1,count0,output,ds,n);
        ds.pop_back();
    }
    if(count0<=count1){
        ds.push_back('0');
        generate(count1,count0+1,output,ds,n);
        ds.pop_back();
    }
}
    vector<string> validStrings(int n) {
        string ds="";
        vector<string> output;
        generate(0,0,output,ds,n);
        sort(output.begin(),output.end());
    return output;
    }
};