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
    int topdown1(vector<int> &nums,int start,int end,vector<int> &dp1){
        if(end < start){
            return 0;
        }
        if(end == start){
            return nums[start];
        }
        if(dp1[end] != -1){
            return dp1[end];
        }
        //include
        int include = nums[end] + topdown1(nums,start ,end-2,dp1);
        //exclude
        int exclude = 0 + topdown1(nums,start,end-1,dp1);

        dp1[end] = max(include,exclude);
        return dp1[end];
    }
    int topdown2(vector<int> &nums,int start,int end,vector<int> &dp2){
        if(end < start){
            return 0;
        }
        if(end == start){
            return nums[start];
        }
        if(dp2[end] != -1){
            return dp2[end];
        }
        //include
        int include = nums[end] + topdown2(nums,start ,end-2,dp2);
        //exclude
        int exclude = 0 + topdown2(nums,start,end-1,dp2);

        dp2[end] = max(include,exclude);
        return dp2[end];
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

        int takefirst = topdown1(nums,0,n-2,dp1);
        int skipfirst = topdown2(nums,1,n-1,dp2);
        int ans = max(takefirst,skipfirst);
        return ans;
    }
};