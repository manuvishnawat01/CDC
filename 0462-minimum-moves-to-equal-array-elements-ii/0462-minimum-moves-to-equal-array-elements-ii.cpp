class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int median = nums[n/2];
        int moves = 0;
        for(int x : nums){
            moves = moves + abs(median-x);
        }
        return moves;
    }
};