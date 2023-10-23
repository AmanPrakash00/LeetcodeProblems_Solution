class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            int repl = curr * curr;
            nums[i] = repl;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};