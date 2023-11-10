class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

/*
        //T.C O(n^2) brute force
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

*/

    unordered_map<int,int> m;
    for(int i=0;i<nums1.size();i++){
        m[nums1[i]]++;
    }
    vector<int> ans;
    for(int i=0;i<nums2.size();i++){
        int data = nums2[i];
        if(m.find(data) != m.end()){
            if(m[data] > 0){
                ans.push_back(data);
                m[data]--;
            }
        }
    }
    return ans;

    }
};