class Solution {
public:
    void recadd(string &num1,string &num2,int p1,int p2,int carry,string &output){
        if(p1< 0 && p2 <0){
            if(carry != 0){
                output.push_back(carry + '0');
            }
            return;
        }

        int n1 = (p1>=0 ? num1[p1] : '0') - '0';
        int n2 = (p2>=0 ? num2[p2] : '0') - '0';

        int tsum = n1 + n2 + carry;
        int digit = tsum % 10;

        carry = tsum/10;
        output.push_back(digit + '0');
        recadd(num1,num2,p1-1,p2-1,carry,output);
    }
    string addStrings(string num1, string num2) {
        int p1 = num1.size()-1;
        int p2 = num2.size()-1;
        int carry = 0;
        string output = "";
        recadd(num1,num2,p1,p2,carry,output);
        reverse(output.begin(),output.end());
        return output;
    }
};