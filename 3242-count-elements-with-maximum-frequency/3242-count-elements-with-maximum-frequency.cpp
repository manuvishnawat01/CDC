class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num : nums){
            m[num]++;
        }
        int mx = INT_MIN;
        for(auto &p : m){
            mx = max(mx, p.second);
        }
        int ans = 0;
        for(auto &p : m){
            if(p.second == mx) ans += p.second;
        }
        return ans;
    }
};
