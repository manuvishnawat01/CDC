class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        int size = prices.size();
        for(int i=1;i<size;++i) {
            if(prices[i]-min > 0) {
                profit += prices[i]-min;
                min = prices[i];
            }
            if(prices[i]<min) min = prices[i];
        }
        return profit;
    }
};