class Solution {
public:
    void permutations(vector<int>&nums,int i,vector<vector<int>>&ans){
        if(i>=nums.size()){
            bool isPresent = find(ans.begin(), ans.end(), nums)!= ans.end();
            if(isPresent){
                return;
            }else{
                ans.push_back(nums);
                return;
            }
        }

        for(int j = i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutations(nums,i+1,ans);
            //backtrack
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permutations(nums,0,ans);
        return ans;
    }
};