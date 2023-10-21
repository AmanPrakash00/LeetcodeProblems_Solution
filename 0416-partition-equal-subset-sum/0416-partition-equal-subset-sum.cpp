class Solution {
public:
    bool solveRec(vector<int> &nums,int index ,int target){
        if(index < 0){
            return false;
        }
        if(target < 0){
            return false;
        }
        if(target == 0){
            return true;
        }
        bool inclusion = solveRec(nums,index - 1,target - nums[index]);
        bool exclusion = solveRec(nums,index - 1,target);

        bool ans = (inclusion || exclusion);
        return ans;
    }
    bool topdown(vector<int> &nums,int index ,int target,vector<vector<int>> &dp){
        if(index < 0){
            return false;
        }
        if(target < 0){
            return false;
        }
        if(target == 0){
            return true;
        }
        //step 3: check if ans is already exist
        if(dp[index][target] != -1){
            return dp[index][target];
        }
        
        bool inclusion = topdown(nums,index - 1,target - nums[index],dp);
        bool exclusion = topdown(nums,index - 1,target,dp);
        // step 2: jaha hum ans store kar rhe waha hum dp mai store kar lenge
        dp[index][target] = (inclusion || exclusion);
        return dp[index][target];
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
        }
        if(sum%2 != 0){
            return false;
        }
        int target = sum / 2;
        int index = nums.size()-1;
        // from recursion
        // return solveRec(nums,index,target);

        //top down approach

        // step:1 dp create 
        int n = nums.size();
        vector<vector<int>> dp (n+1,vector<int>(target+1,-1));
        return topdown(nums,index,target,dp);
    }
};