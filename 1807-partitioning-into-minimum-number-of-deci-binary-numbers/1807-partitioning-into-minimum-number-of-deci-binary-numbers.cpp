class Solution {
public:
    int minPartitions(string n) {
        
        int maxi = INT_MIN;
        for(int i = 0; i < n.length(); i++){
            int digit = n[i] - '0';
            maxi = max(digit,maxi);
        }
        return maxi;

    }
};