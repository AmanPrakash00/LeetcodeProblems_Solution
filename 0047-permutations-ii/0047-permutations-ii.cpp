class Solution {
public:
/* approach 1
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
*/
/* approach 2 using set
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
*/

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // set<vector<int>> s;
        // vector<vector<int>>ans;
        // permutations(nums,0,s);
        // for(auto i:s){
        //     ans.push_back(i);
        // }
        // return ans;

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        do{
             ans.push_back(nums);
        } while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};