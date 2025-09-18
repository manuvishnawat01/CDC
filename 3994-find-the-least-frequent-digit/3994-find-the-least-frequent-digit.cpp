class Solution {
public:
    void countDigits(int n, int freq[10]) {
        if (n == 0) return;
        freq[n % 10]++;              // count current digit
        countDigits(n / 10, freq);   // recurse on remaining number
    }

    int getLeastFrequentDigit(int n) {
        int freq[10] = {0};
        countDigits(n, freq);

        int ans = -1, mini = INT_MAX;
        for (int d = 0; d < 10; d++) {
            if (freq[d] > 0) {
                if (freq[d] < mini || (freq[d] == mini && d < ans)) {
                    mini = freq[d];
                    ans = d;
                }
            }
        }
        return ans;
    }
};
