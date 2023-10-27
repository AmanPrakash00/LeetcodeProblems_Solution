class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            int leftSum = 0;
            int rightSum = 0;

            for(int right = i+1;right < nums.size();right++){
                rightSum += nums[right];
            }
            for(int left = i-1;left>=0;left--){
                leftSum += nums[left];
            }

            int diff = abs(leftSum - rightSum);
            ans.push_back(diff);
        }
        return ans;
    }
};