class Solution {
public:
    int reverse(int n){
    int rev=0;
    while(n>0){
        int digit= n%10;
        rev = digit + rev*10;
        n=n/10;
    }
    return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i =0 ; i<n; i++){
            nums.push_back(reverse(nums[i]));
        }

    unordered_set<int> s;
    for(int i =0; i<nums.size(); i++){
        s.insert(nums[i]);
    }
    return s.size();
    }
};