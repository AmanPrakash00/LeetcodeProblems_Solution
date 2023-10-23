class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        int repeatedTimes = nums.size()/2;

        for(auto i:m){
            if(i.second == repeatedTimes){
                return i.first;
            }
        }
        return 0;
    }
};