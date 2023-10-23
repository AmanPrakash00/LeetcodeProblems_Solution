class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2);
        int i = 0;
        int j = n;
        int k = 0;
        while(i<n && j<2*n){
            ans[k++] = nums[i++];
            ans[k++] = nums[j++];
        }
        return ans;
    }
};