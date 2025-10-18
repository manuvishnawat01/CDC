class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto a : nums){
            mp[a]++;
        }

        for(int i = 0; i<=nums.size(); i++){
            if(mp.find(i) == mp.end()) return i;
        }
        return -1;
    }
};