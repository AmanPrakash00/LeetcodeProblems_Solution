class Solution {
public:

//aproach 1 
/*
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
        delete helper;
    }
*/
    void reverseArray(vector<int>&nums,int i ,int j){

        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % nums.size();
        reverseArray(nums,n-k,n-1);
        reverseArray(nums,0,n-k-1);
        reverseArray(nums,0,n-1);

    }
};