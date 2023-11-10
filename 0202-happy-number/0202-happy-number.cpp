class Solution {
public:
    long long int mod = 1000000007;
    int recSolve(int n){
        if(n == 0){
            return 0;
        }

        int rem = n%10;
        int square = rem * rem;

        int ans = recSolve(n/10);

        int total = ans + square;

        return total;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while( n != 1 && !set.count(n)){
            set.insert(n);
            n = recSolve(n);
        }
        if(n==1){
            return true;
        }else{
            return false;
        }
    }
};