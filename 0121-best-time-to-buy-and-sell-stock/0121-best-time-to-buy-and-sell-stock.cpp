class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];   // minimum price so far
        int maxi = 0;           // maximum profit so far

        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - mini;   // potential profit if sold today
            maxi = max(maxi, profit);        // update max profit
            mini = min(mini, prices[i]);     // update min price so far
        }
        return maxi;
    }
};
