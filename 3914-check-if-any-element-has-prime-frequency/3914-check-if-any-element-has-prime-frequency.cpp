class Solution {
public:
    bool isPrime(int num){
        if(num<2) return false;
        if(num==2){
            return true;
        }
        if(num%2==0){
            return false;
        }
        for(int i=3;i<num;i=i+2){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=1;
        for(int i=1;i<=nums.size();i++){
            if(i!=nums.size() && nums[i]==nums[i-1]){
                freq++;
            }
            else {
                if(isPrime(freq)){
                    return true;
                }
                else{
                    freq=1;
                }
            }
        }
        return false;
    }
};