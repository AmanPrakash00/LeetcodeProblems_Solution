class Solution {
public:
    int recSolve(vector<int>&nums,int target){
        if(target < 0){
            return INT_MIN;
        }
        if(target == 0){
            return 1;
        }

        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int maxi = recSolve(nums,target - nums[i]);
            if(maxi != INT_MIN){
                ans += maxi;
            }
        }
        return ans;
    }

    int topDown(vector<int>&nums,int target,vector<int> &dp){
        if(target < 0){
            return INT_MIN;
        }
        if(target == 0){
            return 1;
        }
        if(dp[target] != -1){
            return dp[target];
        }
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int maxi = topDown(nums,target - nums[i],dp);
            if(maxi != INT_MIN){
                ans += maxi;
            }
        }
        dp[target] = ans;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        // return recSolve(nums,target);
        vector<int> dp(target+1,-1);
        return topDown(nums,target,dp);
    }
};