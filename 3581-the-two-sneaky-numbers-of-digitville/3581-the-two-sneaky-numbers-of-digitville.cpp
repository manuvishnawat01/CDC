class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto a : nums){
            mp[a]++;
        }

        for(auto a : mp){
            if(a.second == 2) ans.push_back(a.first);
        }
        return ans;
    }
};