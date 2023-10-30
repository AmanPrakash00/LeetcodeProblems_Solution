class Solution {
public:
    bool isPalindrome(int x) {
        long long int reversed = 0;
        long long int remainder = 0;
        long long int original = abs(x);
        while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
    if(original == reversed){
        return true;

    }else{
        return false;
    }
    }
};