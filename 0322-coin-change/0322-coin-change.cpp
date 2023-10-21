class Solution {
public:
    int recSolve(vector<int>&coins,int amount){
        if(amount == 0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }
        int maxi = INT_MAX;
        for(int i=0;i<coins.size();i++){
           int  ans = recSolve(coins,amount-coins[i]);
           if(ans!=INT_MAX){
               maxi = min(ans+1,maxi);
           }
        }
        
        return maxi;
        
    }
    int topDown(vector<int>&coins,int amount,vector<int> &dp){
        if(amount == 0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }
        if(dp[amount]!= -1){
            return dp[amount];
        }
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
           int  ans = topDown(coins,amount-coins[i],dp);
           if(ans!=INT_MAX){
               mini = min(ans+1,mini);
           }
        }
        dp[amount] = mini;
        return mini;
    }

    int bottomup(vector<int>& coins, int amount){
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;

        for(int i=1;i<=amount;i++){
            for(int j=0;j<coins.size();j++){
                if(i-coins[j]>=0 && dp[i-coins[j]] != INT_MAX){
                    int  ans = dp[i-coins[j]];
                    
                       dp[i] = min(ans+1,dp[i]);
                    
                }
            }
        }
       return  dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        // int ans = topDownApproach(coins,amount,dp);
        // int ans = recSolve(coins,amount);
        //  if(ans == INT_MAX){
        //     return -1;
        // }else
        //     return ans;


        vector<int> dp(amount+1,-1);
         int ans = bottomup(coins,amount);
         if(ans == INT_MAX){
            return -1;
        }else
            return ans;
    }
};