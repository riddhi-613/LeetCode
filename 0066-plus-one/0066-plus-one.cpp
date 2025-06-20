class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());

        int carry = 1; // Start with 1 since we are doing a "plus one"

        for (int i = 0; i < digits.size(); i++) {
            digits[i] += carry;

            if (digits[i] == 10) {
                digits[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break; // No further carry to process
            }
        }

        if (carry == 1) {
            digits.push_back(1); // Add a new digit if carry is left
        }

        reverse(digits.begin(), digits.end());
        return digits;
    }
};
