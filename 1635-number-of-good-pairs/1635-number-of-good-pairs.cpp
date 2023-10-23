class Solution {
public:

    // T.C - O(n^2)
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        for(int i=0;i<nums.size()-1;i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }


    //optimal solution O(n)
    
    // int numIdenticalPairs(vector<int>& nums){
    //     unordered_map<int,int> m;

    //     for(auto i : nums){
    //         m[i]++;
    //     }
    //     int cnt = 0;
    //     for(auto i: m){
    //         int n = i.second;
    //         cnt += (n*(n-1))/2;
    //     }

    //     return cnt;
    // }
};