class Solution {
public:
    int recSolve(int n){
        if(n==0){
            return 0;
        }

        if(n == 1 || n == 2){
            return 1;
        }

        int ans = recSolve(n-1) + recSolve(n-2) + recSolve(n-3);
        return ans;
    }
    int topdown(int n,vector<int> &dp){
        if(n==0){
            return 0;
        }

        if(n == 1 || n == 2){
            return 1;
        }
        //check if ans is already exist
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = topdown(n-1,dp) + topdown(n-2,dp) + topdown(n-3,dp);
        return dp[n];
    }
    
    int tribonacci(int n) {
        // return recSolve(n);

        vector<int> dp(n+1,-1);
        return topdown(n,dp);
    }
};