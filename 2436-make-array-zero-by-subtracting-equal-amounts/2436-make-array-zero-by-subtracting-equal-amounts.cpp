class Solution {
public:
    /*
    int minifind(vector<int> &nums){
        int mini = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] != 0){
                mini = min(mini,nums[i]);
            }
        }
        return mini;
    }
    int minimumOperations(vector<int>& nums) {
        if(nums.size()==1 && nums[0] ==0){
            return 0;
        }
        if(nums.size()==1 && nums[0] !=0){
            return 1;
        }
        int cnt = 0;
        int maxi = INT_MIN;
        int index = -1;
        for(int i = 0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi = nums[i];
                index = i;
            }
        }
        while(nums[index] != 0){
            int mini = minifind(nums);
            for(int i=0;i<nums.size();i++){
                if(nums[i] != 0){
                    nums[i] = nums[i] - mini;
                }
            }
            cnt++;
        }
        return cnt;
    }
    */
    int minimumOperations(vector<int>& nums){
        if(nums.size()==1 && nums[0] ==0){
            return 0;
        }
        if(nums.size()==1 && nums[0] !=0){
            return 1;
        }

        int cnt = 0;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){

            if(nums[i] != 0){
                cnt++;
                int data = nums[i];
                for(int j = i;j<nums.size();j++){
                    nums[j] -= data;
                }
            }
        }

        return cnt;
    }
};