class Solution {
public:
   int robber(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        int prev2 = nums[0];
        int prev = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++) {
            int curr = max(nums[i] + prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> a(nums.begin(),nums.end()-1);
        int ans1 = robber(a);
        vector<int> b(nums.begin()+1,nums.end());
        int ans2 = robber(b);
        return max(ans1,ans2);
    }
};