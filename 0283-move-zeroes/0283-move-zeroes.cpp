class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first = 0, second = 0;

        while(second<nums.size()){
            if(nums[second]==0){
                second++;
            }
            else{
                nums[first++] = nums[second++];
            }
        }
        for(int i=first; i<nums.size(); ++i){
            nums[i] = 0;
        }
    }
};