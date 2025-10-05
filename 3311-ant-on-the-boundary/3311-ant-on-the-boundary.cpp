class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum = 0;
        int target =0;
        int boundary = 0;
        for(int i=0; i<nums.size(); i++){
            sum = sum+nums[i];
            if(sum == target) boundary++;
        }
        return boundary;
    }
};