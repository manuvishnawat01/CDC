class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, f0 = 0;

        for(int i = 0; i < n; i++) {
            sum += nums[i];
            f0 += nums[i] * i;
        }

        int maxi = f0, fi;

        for(int i = 0; i < n; i++) {
            fi = f0 + sum - nums[n - i - 1] * n;
            maxi = max(maxi, fi);
            f0 = fi;
        }

        return maxi;
    }
};