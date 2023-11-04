class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        map<int,int> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int data;
        for(auto i:mp){
            if(i.second == 1){
                data =  i.first;
                break;
            }
        }

        return data;
    }
};