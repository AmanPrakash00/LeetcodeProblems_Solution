class Solution {
public:
    void digitsFind(int k,vector<int> &nums){
        if(k == 0){
            return ;
        }
        int digit = k%10;
        k = k/10;
        digitsFind(k,nums);
        nums.push_back(digit);
    }
    void recAdd(vector<int> &num,vector<int>&nums,int i,int j,int carry,vector<int> &answer){
        if(i<0 && j<0){
            if(carry != 0){
                answer.push_back(carry);
            }
            return;
        }
        //ek case solve
        int n1 = (i>=0 ? num[i] : 0);
        int n2 = (j>=0 ? nums[j] : 0);
        int tsum = n1 + n2 + carry;
        int digit = tsum % 10;
        carry = tsum / 10;
        answer.push_back(digit);
        recAdd(num,nums,i-1,j-1,carry,answer);
    }
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> nums;
        digitsFind(k,nums);
        int i = num.size()-1;
        int j = nums.size()-1;
        int carry = 0;
        vector<int> answer;
        recAdd(num,nums,i,j,carry,answer);
        reverse(answer.begin(),answer.end());
        return answer;
    }
};