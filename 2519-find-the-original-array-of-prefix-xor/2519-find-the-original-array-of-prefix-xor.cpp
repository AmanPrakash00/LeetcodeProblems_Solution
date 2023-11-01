class Solution {
public:
    int ele(vector<int> &ans,int &curr){
        ans.push_back(curr);
        int anss = 0;
        for(int i=0;i<ans.size();i++){
            anss ^=ans[i];
        }
        ans.pop_back();
        return anss;
    }
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        ans.push_back(pref[0]);
        for(int i = 1;i<pref.size();i++){
            // int data = ele(ans,pref[i]); // approach 1 TLE
            ans.push_back(pref[i-1]^pref[i]);
        }
        return ans;
    }
};