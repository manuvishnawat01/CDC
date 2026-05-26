class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        vector<int> count(n, 0);
        
        for (int num : nums) {
            if (num < 1 || num >= n) return false;
            count[num]++;
        }
        
        // Check: 1 to n-2 appear once, n-1 appears twice
        for (int i = 1; i < n - 1; ++i) {
            if (count[i] != 1) return false;
        }
        
        return count[n - 1] == 2;
    }
};