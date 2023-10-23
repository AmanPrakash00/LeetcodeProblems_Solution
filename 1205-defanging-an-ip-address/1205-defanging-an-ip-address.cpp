class Solution {
public:
    string defangIPaddr(string address) {
        string replace = "[.]";
        string modified = "";
        for(int i = 0;i<address.size();i++){
            if(address[i] == '.'){
                modified += replace;
            }else{
                modified += address[i];
            }
        }

        return modified;
    }
};