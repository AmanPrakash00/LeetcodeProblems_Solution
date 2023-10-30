class Solution {
public:
    /* Approach 1;
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int currMaxi = 0;

        for(int i=0;i<nums.size();i++){
            currMaxi += nums[i];

            if(currMaxi > maxi){
                maxi = currMaxi;
            }
            if(currMaxi < 0){
                currMaxi = 0;
            }
        }
        return maxi;
    }
    */

    int maxSubArray(vector<int>& nums){
        int maxi = INT_MIN;
        int currMaxi = 0;

        for(int i=0;i<nums.size();i++){
            currMaxi = max(currMaxi+nums[i],nums[i]);
            maxi = max(maxi,currMaxi);
        }
        return maxi;
    }
};