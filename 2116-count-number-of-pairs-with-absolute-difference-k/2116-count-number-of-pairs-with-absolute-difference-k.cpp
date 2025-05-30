class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> freq(1000,0);
        int count=0;
        for(int i=0;i<nums.size();i++){
            int val1=nums[i]-k<0?0:nums[i]-k,val2=nums[i]+k;
            count+=(freq[val1]);
            count+=(freq[val2]);
            freq[nums[i]]++;
        }
        return count;
    }
};