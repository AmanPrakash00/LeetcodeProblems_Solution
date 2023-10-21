class Solution {
public:
    void recSolve(vector<int> &nums,int i,int &maxi,int sum){
    //base case 
    if(i >= nums.size()){
        maxi = max(maxi,sum);
        return;
    }
    //inclusion
    recSolve(nums,i+2,maxi,sum+nums[i]);
    //exclusion
    recSolve(nums,i+1,maxi,sum);
    }

    int topDown(vector<int>&nums,int n,vector<int> &dp){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[0];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
         //inclusion
         int include = topDown(nums,n-2,dp)+nums[n];
         //exclude
         int exclude = topDown(nums,n-1,dp) + 0;

         dp[n] = max(include,exclude);
         return dp[n];
    }
    int bottomUp(vector<int> &nums,int n){
        vector<int> dp(n+1,0);

        dp[0] = nums[0];

        for(int i=1;i<=n;i++){
            int temp = 0;
            if(i-2>=0){
                temp = dp[i-2];
            }
            int include = temp + nums[i];
            int exclude = 0 + dp[i-1];
            dp[i] = max(include,exclude);
        }
        return dp[n];
    }

    int spaceOptSolve(vector<int> &nums,int n){
        int prev2 = 0;
        int prev1 = nums[0];

        int curr = 0;

        for(int i = 0;i<=n;i++){
            int temp = 0;
            if(i-2>=0){
                temp = prev2;
            }

            int include = temp + nums[i];
            int exclude = 0 + prev1;
            curr = max(include,exclude);
            prev2 = prev1;
            prev1 = curr ;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
    //     int maxi = 0;
    // int sum = 0;
    // int i = 0;
    // recSolve(nums,i,maxi,sum);

    // return maxi;
    int n = nums.size()-1;
    vector<int>dp(n+1,-1);
    return spaceOptSolve(nums,n);
    }
};