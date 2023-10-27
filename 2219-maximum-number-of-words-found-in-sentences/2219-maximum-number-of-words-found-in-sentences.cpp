class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int cnt = 0;
        int ans = 0;
        for(int i=0;i<sentences.size();i++){
            string str = sentences[i];
            int cnt = 1;
            // string strr
            for(int j=0;j<str.size();j++){
                if(str[j] == ' '){
                    cnt = cnt + 1;
                   
                }
            }
            ans = max(cnt,ans);
        }
        return ans;
    }
};