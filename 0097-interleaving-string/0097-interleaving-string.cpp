class Solution {
public:
    bool solveRec(string s1,string s2 ,string s3,int i,int j,int k){
        if(i==s1.size() and j == s2.size() and k == s3.size()){
            return true;
        }

        bool ans1 = false;
        bool ans2 = false;

        if(s1[i] == s3[k]){
            ans1 = solveRec(s1,s2,s3,i+1,j,k+1);
        }
        if(s2[j] == s3[k]){
            ans2 = solveRec(s1,s2,s3,i,j+1,k+1);
        }

        return (ans1 || ans2);
    }
    bool topdown(string s1,string s2 ,string s3,int i,int j,int k,vector<vector<int>>&dp){
        if(i==s1.size() and j == s2.size() and k == s3.size()){
            return true;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        bool ans1 = false;
        bool ans2 = false;
        if(i < s1.size()){
            if(s1[i] == s3[k]){
                ans1 = topdown(s1,s2,s3,i+1,j,k+1,dp);
            }
        }
        if(j < s2.size()){
            if(s2[j] == s3[k]){
                ans2 = topdown(s1,s2,s3,i,j+1,k+1,dp);
            }
        }
        dp[i][j] = (ans1 || ans2);
        return dp[i][j];
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        bool ans = topdown(s1,s2,s3,0,0,0,dp);
        return ans;
    }
};