class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int currElement = nums[i];
            nums[i] = currElement * currElement;
        }

        sort(nums.begin(),nums.end());
        return nums;
    }
};