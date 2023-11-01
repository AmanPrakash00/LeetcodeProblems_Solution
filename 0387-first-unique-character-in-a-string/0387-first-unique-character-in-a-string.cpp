class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        for(int i = 0;i<s.length();i++){
            m[s[i]]++;
        }
        int index = -1;
        for(int i=s.length()-1;i>=0;i--){
            char ch = s[i];
            if(m.find(ch) != m.end()){
                if(m[ch] == 1){
                    index = i;
                }
            }
        }

        return index;
    }
};