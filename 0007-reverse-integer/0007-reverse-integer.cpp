class Solution {
public:
    long long int mod = 100000007;
    int reverse(int x) {
        // if(x>INT_MAX){
        //     return 0;
        // }
        bool flag = false;
        if(x<0){
            flag = true;
            x = abs(x);
        }
        
        long long int num = 0;
        while(x!=0){
            int rem = x%10;
            num = num*10 + rem;
            x = x/10;
        }
        if(num < INT_MIN || num > INT_MAX){
            return 0;
        }
        if(flag == true){
            return (-1)*num;
        }else{
            return num;
        }
    }
};