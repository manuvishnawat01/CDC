class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
        int n = nums.size();

        int j = 0;
        int maxKeep = 1;

        for (int i = 0; i < n; i++) {
            while (j < n && (long long)nums[j] <= (long long)nums[i] * k) {
                j++;
            }
            maxKeep = max(maxKeep, j - i);
        }

        return n - maxKeep;


    }
};