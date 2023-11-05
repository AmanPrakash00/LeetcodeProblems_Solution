class Solution {
public:
    int longestCommonSubsequence(string &text1,string &text2){
        // vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        vector<int>curr(text2.size()+1,0);
        vector<int>next(text2.size()+1,0);
        for(int i = text1.size()-1;i>=0;i--){
            for(int j = text2.size()-1;j>=0;j--){
                int ans = 0;
                if(text1[i] == text2[j]){
                    ans = 1 + next[j+1];
                }else{
                    ans = 0 + max(curr[j+1],next[j]);
                }
                curr[j] = ans;
            }
            next = curr;
        }
        return next[0];
    }
    int longestPalindromeSubseq(string s) {
        string text1 = s;
        reverse(s.begin(),s.end());
        string text2 = s;

        int ans = longestCommonSubsequence(text1,text2);
        return ans;
    }
};