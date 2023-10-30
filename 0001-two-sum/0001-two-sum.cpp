class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            int index = i;
            for(int j = i+1;j<nums.size();j++){
                
                if(nums[index]+nums[j]==target){
                   if(index != j){
                    ans.push_back(index);
                    ans.push_back(j);
                    return ans;
                   }
                }
            }
        }
                    return ans;
    }
};