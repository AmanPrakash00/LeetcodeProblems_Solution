class Solution {
public:
    void recSolve(vector<string>&ans,int n,int open,int close,string output){
        if(open == 0 && close == 0){
            ans.push_back(output);
            return;
        }

        //ek case solve

        //include open
        if(open>0){
            output.push_back('(');
            recSolve(ans,n,open-1,close,output);
            //backtracing
            output.pop_back();
        }
        //inclde close
        if(close>open){
            output.push_back(')');
            recSolve(ans,n,open,close-1,output);
            //backtrack
            output.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n;
        int close = n;
        string output = "";
        recSolve(ans,n,open,close,output);
        return ans;
    }
};