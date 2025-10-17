class StockSpanner {
public:
    vector<int> prices; // to store all previous prices

    StockSpanner() { }

    int next(int price) {
        prices.push_back(price); // store the new price
        int span = 1; // at least 1 day (today itself)

        // check previous days
        for (int i = prices.size() - 2; i >= 0; i--) {
            if (prices[i] <= price)
                span++;  // price was smaller, so include it
            else
                break;   // found bigger price, stop
        }

        return span;
    }
};
