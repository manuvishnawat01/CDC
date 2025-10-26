class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int i = 0;    
        int j = n / 2;  
        int count = 0;
        while (i < n / 2 && j < n) {
            if (2 * nums[i] <= nums[j]) {
                count += 2;
                i++;
                j++;
            } 
            else {
                j++;
            }
        } 
        return count;
    }
};
