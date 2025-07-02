class Solution {
public:

    int memoize(int start,int end ,vector<int>& nums) {
        int n = nums.size();
         if(start == end) return nums[start];
        if(n == 1) return nums[0];

        int prev2= nums[start];
        int prev1 = max(nums[start+1],nums[start]);
        int cur = prev1;
        for(int i = start+2 ; i <= end ; i++){
        cur = max((nums[i] + prev2),prev1);
        prev2 = prev1;
        prev1 = cur;
        }

        return cur;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        return max(memoize(0,n-2,nums), memoize(1,n-1,nums));
    }
};