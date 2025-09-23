class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1,i,j;
        for (i=0;i<nums.size();i++) {
            for (int j=i;j<nums.size();j++) {
                if (i<j && nums[i]<nums[j]) {
                    maxi=max(maxi,nums[j]-nums[i]);
                }
            }
        }
        return maxi;
    }
};