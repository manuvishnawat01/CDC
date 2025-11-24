class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
    int n = nums.size();    
    int curr = 0;
    vector<bool> result(n);
    for(int i=0; i<n; i++){
        curr = ((curr * 2) + nums[i]) % 5;
        if(curr == 0) result[i] = true;
        else result[i] = false;
    }
    return result;
    }
};