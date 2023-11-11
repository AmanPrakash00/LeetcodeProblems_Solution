class Solution {
public:
    int recSolve(string &s,string &t,int i,int j){
        if(j == t.length()){
            return 1;
        }
        if(i == s.length()){
            return 0;
        }
        int ans1 = 0 , ans2 = 0;
        if(s[i] == t[j]){
            ans1 =  recSolve(s,t,i+1,j+1);
        }
        ans2 =  recSolve(s,t,i+1,j);
        
        int ans = ans1 + ans2;
        return ans;
    }
    int topdown(string &s,string &t,int i,int j,vector<vector<int>>&dp){
        if(j == t.length()){
            return 1;
        }
        if(i == s.length()){
            return 0;
        }
        if(dp[i][j] != INT_MIN){
            return dp[i][j];
        }
        int ans1 = 0 , ans2 = 0;
        if(s[i] == t[j]){
            ans1 =  topdown(s,t,i+1,j+1,dp);
        }
        ans2 =  topdown(s,t,i+1,j,dp);
        
        dp[i][j] = ans1 + ans2;
        return dp[i][j];
    }
    int numDistinct(string s, string t) {
        // // string output = "";
        // return recSolve(s,t,0,0);

        int s1 = s.length();
        int s2 = t.length();
        vector<vector<int>>dp(s1+1,vector<int>(s2+1,INT_MIN));
        return topdown(s,t,0,0,dp);
    }
};
