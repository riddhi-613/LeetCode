class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> dividedStr;
        if(s.size()%k==0){
            int index=0;
            for(int i=0;i<s.size();i=i+k){
                string DividedS;
                for(int j=0;j<k;j++){
                    DividedS.push_back(s[index++]);
                }
                dividedStr.push_back(DividedS);
            }
        }else{
            int index=0;
            while (index < s.length()) {
            string DividedS;
            for (int j = 0; j < k; j++) {
                if (index < s.length())
                    DividedS.push_back(s[index++]);
                else
                    DividedS.push_back(fill);
            }
            dividedStr.push_back(DividedS);
        }

                
            }
        
        return dividedStr;
        
    }
};