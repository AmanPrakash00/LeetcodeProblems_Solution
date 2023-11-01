class Solution {
public:
    int findGCD(vector<int>& nums) {
       int mini = INT_MAX;
       int maxi = INT_MIN;
       for(int i=0;i<nums.size();i++){
           if(maxi < nums[i]){
               maxi = nums[i];  
           }
           if(nums[i] < mini){
               mini = nums[i];
           }
       } 
       int ans = 1;
       for(int i = 1 ;i<= mini;i++ ){
           if(mini%i == 0 && maxi%i == 0){
               ans = i;
           }
       }

       return ans;
    }
};