class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        for(int i=0;i<magazine.size();i++){
            m[magazine[i]]++;
        }

        for(int i=0;i<ransomNote.size();i++){
            char ch = ransomNote[i];

            if(m.find(ch) != m.end()){
                if(m[ch] != 0){
                    m[ch]--;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }

        return true;
    }
};