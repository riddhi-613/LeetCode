class Solution {
public:
    int myAtoi(string s) {
        bool isNegative = false;
        int str2num = 0;
        int i = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') isNegative = true;
            i++;
        }
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (str2num > (INT_MAX - digit) / 10) {
                return isNegative ? INT_MIN : INT_MAX;
            }
            str2num = str2num * 10 + digit;
            i++;
        }
        if (isNegative) {
            str2num = -str2num;
        }
        return str2num;
    }
};
