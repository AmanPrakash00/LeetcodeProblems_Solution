class Solution {
public:
    void permutations(vector<int>&nums,int i,set<vector<int>>&s){
        if(i>=nums.size()){
            s.insert(nums);
            return;
        }
        for(int j = i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            permutations(nums,i+1,s);
            //backtrack
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>>ans;
        permutations(nums,0,s);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};