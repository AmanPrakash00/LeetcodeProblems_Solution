class Solution {
public:
    char findTheDifference(string s, string t) {
        
        for(int i=0;i<t.size();i++){
            char ch = t[i];

            int found = s.find(ch);
            if(found == -1){
                return ch;
            }else{
                s[found] = ' ';
            }

        }
        return ' ';
    }
};