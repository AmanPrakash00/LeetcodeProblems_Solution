class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;

        for(int i = 0;i< arr2.size();i++){
            for(int j = 0;j<arr1.size();j++){
                if(arr2[i] == arr1[j]){
                    ans.push_back(arr2[i]);
                    arr1[j] = -1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        // int index = upper_bound(arr1.begin(),arr1.end(),-1)-arr1.begin();
        for(int i = 0;i< arr1.size();i++){
            if(arr1[i] != -1){
                ans.push_back(arr1[i]);
            }
        }

        return ans;
    }
};