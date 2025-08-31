class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int minimum = nums[0];
        for(int i =0 ;i<n; i++){
            int a = nums[i];
            int sum =0 ;
            while(a!=0){
                int ld = a%10;
                sum =sum+ld;
                a/=10;
            }
            nums[i] = sum;
            minimum = min(nums[i],minimum);
        }
        return minimum;
    }
};