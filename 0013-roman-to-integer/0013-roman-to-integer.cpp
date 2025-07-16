class Solution {
public:
    int romanToInt(string s) {
        map<char, int> romanMap = {
                                    {'I', 1},
                                    {'V', 5},
                                    {'X', 10},
                                    {'L', 50},
                                    {'C', 100},
                                    {'D', 500},
                                    {'M', 1000}
                                };
        int index=0; int total=0;
        if(s.length()==1){
            return romanMap[s[index]];
        }
        while(index<s.length()-1){
            if(romanMap[s[index]]>=romanMap[s[index+1]]){
                total+=romanMap[s[index]];
            }
            else{
                total-=romanMap[s[index]];
            }
            index++;
        }
        
            total+=romanMap[s[s.length()-1]];
        
         return total;
    }
};