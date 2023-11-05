class Solution {
public:
/* jayda dimag laga diya koi baat nhi 

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
*/
// kisi ne accha bana diya 
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry=0;
        for(int i=num.size()-1; i>=0 || k>0 ; i--){
            int sum=0;
            if(i>=0){
               sum = num[i];
            }
            sum =  sum + carry + k%10;
            ans.push_back(sum%10);
            carry=sum/10;
            k/=10;
        }
        if(carry){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};