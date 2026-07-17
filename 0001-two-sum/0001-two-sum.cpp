class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //creating unorderde map.

        unordered_map<int,int> mp;

    
        for(int i = 0; i<nums.size(); i++){
            int complement = target-nums[i];
            // checking if the required complement is already present in the map.
            //if it is present we directly return pair.
            if(mp.find(complement) != mp.end()){// this is the way to find element in map.
                return {mp[complement],i};
            }
            mp[nums[i]] = i; // increasing the frequency of each element present in map
        }
        return {};// if no pair found return NULL. or { };
    }
};