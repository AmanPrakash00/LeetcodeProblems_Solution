class Solution {
public:
    int recSolveDigits(int n){
        if(n==0){
            return 0;
        }

        int rem = n%10;

        int ans = recSolveDigits(n/10);

        int sum = rem + ans;

        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int totalSumOfNums = 0;
        int totalDigitSum = 0;
        for(int i=0;i<nums.size();i++){
            totalSumOfNums += nums[i];
            totalDigitSum += recSolveDigits(nums[i]);
        }

        int answer = abs(totalSumOfNums - totalDigitSum);
        return answer;
    }
};