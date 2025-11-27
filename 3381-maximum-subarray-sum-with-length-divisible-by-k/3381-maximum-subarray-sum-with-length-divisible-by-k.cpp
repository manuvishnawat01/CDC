class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long prefix = 0;
        long long ans = LLONG_MIN;
        vector<long long> best(k, LLONG_MAX);
        best[k - 1] = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefix += nums[i];
            int r = i % k;
            if (best[r] != LLONG_MAX) {
                ans = max(ans, prefix - best[r]);
            }
            best[r] = min(best[r], prefix);
        }

        return ans;
    }
};
