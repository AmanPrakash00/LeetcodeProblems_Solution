class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> ans;
        ans.push_back(first);
        int prev = first;
        for(int i=0;i<encoded.size();i++){
            int curr = prev^encoded[i];
            prev = curr;
            ans.push_back(prev);
        }
        return ans;
    }
};