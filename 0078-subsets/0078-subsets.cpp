class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>&nums,int i,vector<int>&temp){
        int n = nums.size();
        // base case
        if(i>=n){
            ans.push_back(temp);
            return;
        }

        //recursion
        temp.push_back(nums[i]); // take
        solve(nums,i+1,temp);
        temp.pop_back(); // not take
        solve(nums,i+1,temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(nums,0,temp);

        return ans;
    }
};