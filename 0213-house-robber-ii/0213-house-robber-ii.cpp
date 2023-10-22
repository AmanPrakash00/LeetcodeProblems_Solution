class Solution {
public:
    int recSolve(vector<int> &nums,int start,int end){
        if(end < start){
            return 0;
        }
        if(end == start){
            return nums[start];
        }
        //include
        int include = nums[end] + recSolve(nums,start ,end-2);
        //exclude
        int exclude = 0 + recSolve(nums,start,end-1);

        int ans = max(include,exclude);
        return ans;
    }
    int topdown(vector<int> &nums,int start,int end,vector<int> &dp){
        if(end < start){
            return 0;
        }
        if(end == start){
            return nums[start];
        }
        if(dp[end] != -1){
            return dp[end];
        }
        //include
        int include = nums[end] + topdown(nums,start ,end-2,dp);
        //exclude
        int exclude = 0 + topdown(nums,start,end-1,dp);

        dp[end] = max(include,exclude);
        return dp[end];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        // int takefirst = recSolve(nums,0,n-2);
        // int skipfirst = recSolve(nums,1,n-1);

        // int ans = max(takefirst,skipfirst);
        // return ans;

        vector<int> dp1(n+1,-1);
        vector<int> dp2(n+1,-1);

        int takefirst = topdown(nums,0,n-2,dp1);
        int skipfirst = topdown(nums,1,n-1,dp2);
        int ans = max(takefirst,skipfirst);
        return ans;
    }
};