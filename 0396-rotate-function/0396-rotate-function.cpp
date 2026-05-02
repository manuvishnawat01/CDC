class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            ans += (i * nums[i]);
            sum += nums[i];
        }

        int prev = ans;
        for (int i = 1; i < n; i++) {
            int val = prev - ((n - 1) * nums[n - i]) + (sum - nums[n - i]);
            prev = val;
            ans = max(ans, val);
        }
        return ans;
    }
};