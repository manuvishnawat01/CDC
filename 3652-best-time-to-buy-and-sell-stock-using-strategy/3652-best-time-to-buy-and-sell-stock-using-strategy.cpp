class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();

        long long base = 0;
        for (int i = 0; i < n; i++) {
            base += 1LL * strategy[i] * prices[i];
        }

        vector<long long> prefPrice(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefPrice[i + 1] = prefPrice[i] + prices[i];
        }

        vector<long long> prefStrat(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefStrat[i + 1] = prefStrat[i] + 1LL * strategy[i] * prices[i];
        }

        int half = k / 2;
        long long bestGain = 0;

        for (int i = 0; i + k <= n; i++) {
            int j = i + k;
            long long original = prefStrat[j] - prefStrat[i];
            long long forcedSell = prefPrice[j] - prefPrice[i + half];
            bestGain = max(bestGain, forcedSell - original);
        }

        return base + bestGain;
    }
};
