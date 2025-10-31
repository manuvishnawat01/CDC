class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto n : nums) mp[n]++;

        while(k>0){
            int maxi = INT_MIN;
            int maxindex = 0;
            for(auto m : mp){
                if(m.second>maxi){
                     maxi = m.second;
                     maxindex = m.first;
                }
            }
            ans.push_back(maxindex);
            mp.erase(maxindex);
            k--;
        }
        return ans;
    }
};