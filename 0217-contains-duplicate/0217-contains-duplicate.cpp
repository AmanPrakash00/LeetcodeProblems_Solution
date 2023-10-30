class Solution {
public:
    /*
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto i : m){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
    */
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                return true;
            }
            m[nums[i]]=i;
        }


        return false;
    }
};