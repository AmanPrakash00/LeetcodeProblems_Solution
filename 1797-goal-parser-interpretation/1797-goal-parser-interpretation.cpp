class Solution {
public:
    string interpret(string command) {
        string output = "";
        string check  = "";
        for(int i=0;i<command.size();i++){
            char ch = command[i];
            check+=ch;
            if(check == "G"){
                output += check;
                check = "";
                continue;
            }
            if(check == "()"){
                output += "o";
                check = "";
                continue;
            }
            if(check == "(al)"){
                output += "al";
                check = "";
                continue;
            }
        }
        return output;
    }
};