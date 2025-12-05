class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;
        int n = nums.size();
        if (n < 2) return 0;
        return (total % 2 == 0) ? (n - 1) : 0;
    }
};
