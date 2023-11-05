class Solution {
public:
    string reverseWords(string s) {
        string output = "";
        string str ="";
        bool flag = true;
        for(int i=0;i<s.length();i++){
            
            if(s[i] == ' '){
                flag = true;
                // output.insert(0,str);
                // output.insert(0," ");
                // str = "";
                continue;
            }else{
                if(flag == true && str.length() != 0){
                    output.insert(0,str);
                    output.insert(0," ");
                    str = "";
                }
                str.push_back(s[i]);
                flag = false;
            }
        }
        output.insert(0,str);
        return output;
    }
};