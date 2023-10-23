class Solution {
public:
    int lengthOfLastWord(string s) {
        string str  = "";
        // char ch 
            bool flag = false;
            for(int i = s.length()-1;i>=0;i--){
                bool stop = false ;
                if(s[i] != ' '){
                    str.push_back(s[i]);
                    flag = true;
                }else{
                    stop = true;
                }

                if(flag == stop){
                    return str.size();
                }
            }
        return str.size();
    }
};