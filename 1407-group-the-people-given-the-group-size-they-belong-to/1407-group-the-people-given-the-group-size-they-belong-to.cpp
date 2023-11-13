class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> answer;
        vector<int> ans;
        int group = 0;
        int maxi = 0;
        for(int i = 0;i<groupSizes.size();i++){
            maxi = max(maxi,groupSizes[i]);
        }
        for(int i = 1;i<=maxi;i++){
            for(int j = 0;j<groupSizes.size();j++){
                if(groupSizes[j] == i){
                    groupSizes[j] = -1;
                    ans.push_back(j);
                }
                if(ans.size() == i){
                    answer.push_back(ans);
                    ans.clear();
                }
            }
        }

        return answer;
    }
};