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
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int>res;
    int n=nums1.size(),m=nums2.size();
    int i=0,j=0;
    while(i<n && j<m) {
        if(nums1[i]==nums2[j]) {
            res.push_back(nums1[i]);
            i++;
            j++;
        }else if(nums1[i]<nums2[j]) {
            i++;
        }else {
            j++;
        }
    } 
    return res;
    }


/* both O(n) thoda aur sapce optimize ho sakta hai 
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

*/

/*  Answer array nhi li phir bhi kuch space kam hua nhi hahah
    unordered_map<int,int> m;
    for(int i=0;i<nums1.size();i++){
        m[nums1[i]]++;
    }
    nums1.clear();
    for(int i=0;i<nums2.size();i++){
        int data = nums2[i];
        if(m.find(data) != m.end()){
            if(m[data] > 0){
                nums1.push_back(data);
                m[data]--;
            }
        }
    }
    return nums1;
    }
*/
};