class Solution {
public:
    string findString(int n,int b){
        string str = "";
        while(n!=0){
            int digit = n%b;
            str.push_back(digit + '0');
            n = n / b;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    bool checkPalindrome(string &str){
        int i = 0;
        int j = str.length()-1;
        while(i<j){
            if(str[i] != str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i = 2;i<=n-2;i++){
            string str = findString(n,i);
            bool flag = checkPalindrome(str);
            if(flag == false){
                return false;
            }
        }
        return true;
        
    }
};