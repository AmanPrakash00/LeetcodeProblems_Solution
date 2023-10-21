class Solution {
public:
    int recSolve(int n){
        if(n == 0 || n == 1){
            return n;
        }

        int ans = recSolve(n-1) + recSolve(n-2);
        return ans;
    }

    int topdown(int n,vector<int> &dp){
        if(n == 0 || n == 1){
            return n;
        }
        // step:3 check ans if already exist
        if(dp[n] != -1){
            return dp[n];
        }
        // step:2 store in dp
        dp[n] = topdown(n-1,dp) + topdown(n-2,dp);
        return dp[n];
    }
    int bottomup(int n){
        // step:1 create dp 
        vector<int> dp(n+1,-1);

        //step:2 check flow of top down and base case 
        // reverse the process of flow
        dp[0] = 0;
        dp[1] = 1;
        if(n == 0){
            return dp[0];
        }
        if(n == 1){
            return dp[1];
        }
        //we go to 2 -> n
        for(int i = 2;i<=n;i++){
            //step :3 store in dp 
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }

    //for space opt we check the value dependence
    //we can see that the n is depend on n-1 and n-2 
    //than we can do this in O(1) space complexity
    
    int spaceOPT(int n){
        int prev2 = 0;
        int prev1 = 1;
        if(n == 0){
            return prev2;
        }
        if(n == 1){
            return prev1;
        }
        int curr = 0;
        //we go to 2 -> n
        for(int i = 2;i<=n;i++){
            //exchange the process
            curr = prev2 + prev1;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;
    }
    int fib(int n) {
        //recursion
        // return recSolve(n);

        //topdown 
        // step : 1 create dp
        // vector<int> dp(n+1,-1);
        // return topdown(n,dp);

        //bottom up

        // return bottomup(n);

        return spaceOPT(n);
    }
};