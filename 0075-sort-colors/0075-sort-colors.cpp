class Solution {
public:
/* 
    Question ke according aisa bilkul nhi karna hai

    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
*/

    void sortColors(vector<int>&nums){
        int n = nums.size();
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                zero++;
                continue;
            }
            if(nums[i] == 1){
                one++;
                continue;
            }
            two++;
        }

        for(int i = 0;i<n;i++){
            if(zero != 0){
                nums[i] = 0;
                zero--;
                continue;
            }
            if(one != 0){
                nums[i] = 1;
                one--;
                continue;
            }
            nums[i] = 2;
            two--;
        }
    }
};