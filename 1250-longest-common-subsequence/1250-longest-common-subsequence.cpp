class Solution {
public:
    // unordered_map<string,int> m;
    // void solveRec1(string &text1 ,int index,string output){
    //     if(index >= text1.size()){
    //         m[output]++;
    //         return ;
    //     }

    //     //inclusion
    //     output.push_back(text1[index]);
    //     solveRec1(text1,index+1,output);
    //     output.pop_back();
    //     //exclusion
    //     solveRec1(text1,index+1,output);
    // }

    // void solveRec2(string &text2 ,int index,string output,int &maxi){
    //     if(index >= text2.size()){
    //         if(m.find(output) != m.end()){
    //             int n = output.size();
    //             if(n > maxi){
    //                 maxi = n;
    //             }
    //         }
    //         return ;
    //     }
    //     //inclusion
    //     output.push_back(text2[index]);
    //     solveRec2(text2,index+1,output,maxi);
    //     output.pop_back();
    //     //exclusion
    //     solveRec2(text2,index+1,output,maxi);
    // }


    // int longestCommonSubsequence(string text1, string text2) {
    //     int maxi = 0;
    //     string output = "";
    //     solveRec1(text1,0,output);
    //     output = "";
    //     solveRec2(text2,0,output,maxi);

    //     return maxi;
    // }

    //recursion
    int recSolve(string &text1,string &text2,int i,int j){
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }

        //dono mil jaye
        int ans = 0;
        if(text1[i] == text2[j]){
            ans = 1 + recSolve(text1,text2,i+1,j+1);
        }else{
             ans = 0 + max(recSolve(text1,text2,i+1,j) ,recSolve(text1,text2,i,j+1));
        }
        return ans;

    }
    //top down approach
    int topdown(string &text1,string &text2,int i,int j,vector<vector<int>> &dp){
        if(i>=text1.length() || j>=text2.length()){
            return 0;
        }
        //check if ans is already exist
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        //dono mil jaye
        int ans = 0;
        if(text1[i] == text2[j]){
            ans = 1 + topdown(text1,text2,i+1,j+1,dp);
        }else{
             ans = 0 + max(topdown(text1,text2,i+1,j,dp) ,topdown(text1,text2,i,j+1,dp));
        }
        dp[i][j] = ans;
        return dp[i][j];

    }
    int bottomup(string &text1,string &text2){
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        for(int i = text1.size()-1;i>=0;i--){
            for(int j = text2.size()-1;j>=0;j--){
                int ans = 0;
                if(text1[i] == text2[j]){
                    ans = 1 + dp[i+1][j+1];
                }else{
                    ans = 0 + max(dp[i+1][j],dp[i][j+1]);
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }

    int longestCommonSubsequence(string text1, string text2){
            if(text1 == text2){
                return text1.size();
            }
            // return recSolve(text1,text2,0,0);
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,-1));
       return topdown(text1,text2,0,0,dp);
    }
};