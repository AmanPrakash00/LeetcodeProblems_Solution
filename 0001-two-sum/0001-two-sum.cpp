class Solution {
public:
/*
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
*/
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int remaining = target - nums[i];
            if(m.find(remaining) != m.end()){
                int eIndex = m[remaining];
                return {eIndex,i};
            }
            m[nums[i]] = i;
        }
        return {};

    
};
