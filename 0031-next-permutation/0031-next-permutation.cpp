class Solution {
public:
    // void recSolve(vector<int> &nums,int index,vector<string>&str){
    //     if(index >= nums.size()){
    //         string s;
    //         for(int i = 0;i<nums.size();i++){
    //             char ch = nums[i] + '0';
    //             s.push_back(ch);
    //         }
    //         str.push_back(s);
    //         return;
    //     }
        
    //     for(int j = index;j<nums.size();j++){
    //         swap(nums[index],nums[j]);
    //         recSolve(nums,index+1);
    //         swap(nums[index],nums[j]);
    //     }
    // }
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
    }
};