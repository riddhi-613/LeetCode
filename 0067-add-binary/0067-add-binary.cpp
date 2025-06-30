class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int indexA=0;
        int indexB=0;
        int carry=0;
        string finalSum="";
        while(indexA<a.length() && indexB<b.length()){
            if(a[indexA]+b[indexB]+carry-'0'=='2'){
                finalSum.push_back('0');
                carry=1;
            }
            else if(a[indexA]+b[indexB]+carry-'0'=='3'){
                finalSum.push_back('1');
                carry=1;
            }
            else if(a[indexA]+b[indexB]+carry-'0'=='1'){
                finalSum.push_back('1');
                carry=0;
            }
            else if(a[indexA]+b[indexB]+carry-'0'=='0'){
                finalSum.push_back('0');
                carry=0;
            }
                indexA++;
                indexB++;
        }
        while(indexA<a.length()){
            if(a[indexA]+carry=='2'){
                finalSum.push_back('0');
                carry=1;
            }
            else if(a[indexA]+carry=='1'){
                finalSum.push_back('1');
                carry=0;
            }
            else if(a[indexA]+carry=='0'){
                finalSum.push_back('0');
                carry=0;
            }
                indexA++;
        }
        while(indexB<b.length()){
            if(b[indexB]+carry=='2'){
                finalSum.push_back('0');
                carry=1;
            }
            else if(b[indexB]+carry=='1'){
                finalSum.push_back('1');
                carry=0;
            }
            else if(b[indexB]+carry=='0'){
                finalSum.push_back('0');
                carry=0;
            }
            indexB++;
        }
        if(carry==1){
            finalSum.push_back('1');
        }
        reverse(finalSum.begin(),finalSum.end());
        return finalSum;
    }
};