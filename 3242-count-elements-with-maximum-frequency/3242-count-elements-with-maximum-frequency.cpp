class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq(101, 0); 

        for (int num : nums) {
            freq[num]++;
        }
        int mx = 0;
        for (int f : freq) {
            mx = max(mx, f);
        }
        int ans = 0;
        for (int f : freq) {
            if (f == mx) ans += f;
        }

        return ans;
    }
};
