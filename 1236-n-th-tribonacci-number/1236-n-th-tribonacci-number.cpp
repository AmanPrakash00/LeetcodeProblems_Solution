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
    int bottomup(int n){
        if(n==0){
            return 0;
        }
        if(n == 1 || n == 2){
            return 1;
        }
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
    int bottomupSO(int n){
        // vector<int> dp(n+1,-1);
        int prev3 = 0;
        if( n==0){
            return prev3;
        }
        int prev2 = 1;
        int prev1 = 1;
        if(n==1 || n==2){
            return prev1;
        }
        int curr = 0;
        for(int i=3;i<=n;i++){
            curr = prev3 + prev2 + prev1;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
    int tribonacci(int n) {
        //1. recursive call 

        // return recSolve(n);

        //2. topdown call
        // vector<int> dp(n+1,-1);
        // return topdown(n,dp);

        //3. bottom up call
        
        return bottomupSO(n);
    }
};