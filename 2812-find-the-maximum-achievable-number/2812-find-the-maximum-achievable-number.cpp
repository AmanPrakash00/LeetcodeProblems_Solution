class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int maxPossible = num+t; 
        for(int i = t ;i>0;i--){
            maxPossible++;
        }
        return maxPossible;
    }
};