class Solution {
public:

    void recSolve(vector<int> &prices,int index,int &minPrices,int &maxProfit){
        if(index >= prices.size()) return;

        //ek case solve
        if(prices[index] < minPrices){
            minPrices = prices[index];
        }
        int todayProfit = prices[index] - minPrices;

        if(todayProfit > maxProfit){
            maxProfit = todayProfit;
        }

        recSolve(prices,index+1,minPrices,maxProfit);
    }
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int minPrice = INT_MAX;
        int index = 0;
        recSolve(prices,index,minPrice,maxProfit);
        return maxProfit;
    }
};