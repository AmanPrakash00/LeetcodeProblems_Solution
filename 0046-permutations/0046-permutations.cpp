class Solution {
public:
    void permutations(vector<int>&nums,int i,vector<vector<int>>&ans){
        if(i>=nums.size()){
            // for(int i = 0;i<nums.size();i++){
            //     cout<<nums[i]<<" ";
            // }
            // cout<<endl;
            ans.push_back(nums);
            return;
        }

        for(int j = i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutations(nums,i+1,ans);
            //backtrack
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>> ans;
        // permutations(nums,0,ans);
        // return ans;

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
             ans.push_back(nums);
        } while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};