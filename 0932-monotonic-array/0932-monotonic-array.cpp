class Solution {
public:
    bool asc(vector<int>&nums,int i){
        if(i>=nums.size()){
            return true;
        }

        //ek case solve
        if(nums[i-1] > nums[i]){
            return false;
        }

        return asc(nums,i+1);
    }

    bool dsc(vector<int>&nums,int i){
        if(i>=nums.size()){
            return true;
        }

        //ek case solve
        if(nums[i-1] < nums[i]){
            return false;
        }

        return dsc(nums,i+1);
    }
    bool isMonotonic(vector<int>& nums) {
        bool ans1 = asc(nums,1);
        bool ans2 = dsc(nums,1);
        bool ans = (ans1 || ans2);
        return ans;
    }
};