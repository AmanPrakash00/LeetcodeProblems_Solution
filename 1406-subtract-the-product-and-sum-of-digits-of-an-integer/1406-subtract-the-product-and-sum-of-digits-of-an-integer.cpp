class Solution {
public:
    int productOfDigits(int n){
        if(n==0){
            return 1;
        }

        int rem = n%10;

        int ans = productOfDigits(n/10);

        return (ans*rem);
    }
    int sumOfDigits(int n){
        if(n==0){
            return 0;
        }

        int rem = n%10;

        int ans = sumOfDigits(n/10);

        return (ans+rem);
    }
    int subtractProductAndSum(int n) {
        int POD = productOfDigits(n);
        int SOD = sumOfDigits(n);
        int ans = POD - SOD;
        return ans;
    }
};