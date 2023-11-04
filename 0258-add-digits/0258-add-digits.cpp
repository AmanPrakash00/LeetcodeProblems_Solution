class Solution {
public:


    // O(1) T.C
    /*
    int addDigits(int num) {
      if(num==0)
          return 0;
      else if(num%9==0)
          return 9;
      else
          return num%9;
    }
    */

    int digitSum(int num){
        if(num==0){
            return 0;
        }

        //rem rakh lenge
        int rem = num%10;

        int ans1 = digitSum(num/10);

        int ans = ans1+rem;

        return ans;
    }
    int addDigits(int num) {
        if(num==0){
            return 0;
        }

        while((num / 10) != 0){

            num = digitSum(num);
        }

        return num;
    }
};