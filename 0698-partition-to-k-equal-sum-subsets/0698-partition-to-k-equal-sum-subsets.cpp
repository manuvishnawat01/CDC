class Solution {
public:

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total = 0;
        for(int n : nums) total+=n;
        if(total % k != 0) return false;
        int target = total/k;
        sort(nums.begin(),nums.end(),greater<int>());
        if(nums[0]>target) return false;

        vector<int> bucket(k,0);
        return backtrack(0,nums,bucket,target);
    }

        bool backtrack(int idx,vector<int>& nums, vector<int>& bucket, int target){
        if(idx == nums.size()) return true;
        int val = nums[idx];
        for (int i = 0; i < (int)bucket.size(); i++) {
            if (bucket[i] + val <= target) {
                bucket[i] += val;

                if (backtrack(idx + 1, nums, bucket, target)) 
                    return true;

                bucket[i] -= val;  
            }
            if(bucket[i] == 0) break;
        }
        return false;
    }
};