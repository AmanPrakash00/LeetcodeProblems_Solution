class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                m[nums[i]]++;
            }
        }
        int num = 1;

        for(auto i : m){

            //check if 
            if(num < i.first){
                return num;
            }else{
                num++;
            }
        }
        return num;

    }
};