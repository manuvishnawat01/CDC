class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++){
            ans[i] = -1; 
            for(int a = 0; a <= nums[i]; a++){
                if((a | (a + 1)) == nums[i] ){
                    ans[i] = a;
                    break; 
                }
            }
        }

        return ans;
    }
};
