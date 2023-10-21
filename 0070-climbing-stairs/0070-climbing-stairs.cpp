class Solution {
public:

    int recSolve(int n){
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int ans = recSolve(n-1) + recSolve(n-2);
        return ans;
    }

    int topDownSolve(int n, vector<int> &dp){
        if(n== 0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
    }
    int climbStairs(int n) {
        //step - 1
        vector<int> dp(n+1,-1);

        int ans = topDownSolve(n,dp);
        return ans;
    }
};