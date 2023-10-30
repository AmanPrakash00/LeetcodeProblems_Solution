class Solution {
public:
/*
    //brute force
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    int condition = abs(i-j);
                    if(condition <= k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
*/
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int condition = 0;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i]) != m.end()){
                condition = abs(i-m[nums[i]]);
                if(condition <= k){
                    return true;
                }
            }
            m[nums[i]]=i;
        }
        return false;
    }
};