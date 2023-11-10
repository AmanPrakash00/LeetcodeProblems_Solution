class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // unordered_map<int,int> m;
        // for(int i=0;i<nums1.size();i++){
        //     m[nums1[i]]++;
        // }
        // vector<int> ans;
        // for(int i=0;i<nums2.size();i++){
        //     int data = nums2[i];
        //     if(m.find(data) != m.end()){
        //         ans.push_back(data);
        //     }
        // }
        // unordered_map<int,int> mp;
        // for(int i=0;i<ans.size();i++){
        //     mp[ans[i]]++;
        // }
        // vector<int> ans1;
        // for(auto i:mp){
        //     ans1.push_back(i.first);
        // }
        vector<int> ans;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        return ans;
    }
};