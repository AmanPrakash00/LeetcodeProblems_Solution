class Solution {
public:
    int recSolve(int n){
        if(n==0) return 1;
        if(n<0) return 0;

        int ans = INT_MAX;
        int end = sqrt(n);
        for(int i = 1;i<=end;i++){
            int square = i*i;
            int numofPerfect = 1 + recSolve(n-square);
            if(numofPerfect<ans){
                ans = numofPerfect;
            }
        }

        return ans;
    }

    int topdown(int n,vector<int> &dp){
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n] != INT_MAX){
            return dp[n];
        }
        int ans = INT_MAX;
        int end = sqrt(n);
        for(int i = 1;i<=end;i++){
            int square = i*i;
            int numofPerfect = 1 + topdown(n-square,dp);
            if(numofPerfect<ans){
                ans = numofPerfect;
            }
        }
        dp[n] = ans;
        return dp[n];
    }
    int numSquares(int n) {
        // return recSolve(n)-1;

        vector<int> dp(n+1,INT_MAX);
        return topdown(n,dp)-1;
    }
};