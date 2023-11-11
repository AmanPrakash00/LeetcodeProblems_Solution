class Solution {
public:

//aproach 1 : T.
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        while(k>n){
            k = k - n;
        }
        vector<int> helper;
        for(int i = n-k;i<n;i++){
            helper.push_back(nums[i]);
        }

        for(int i = 0;i<n-k;i++){
            helper.push_back(nums[i]);
        }

        for(int i = 0;i<n;i++){
            nums[i] = helper[i];
        }
    }
};