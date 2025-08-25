class Solution {
public:
    bool isBalanced(string nums) {
        int n = nums.size();
        int  se =0;
        int so =0;
        for(int i =0 ; i<n; i++){
            int a =nums[i] -'0';
            if(i%2==0) se+=a;
            else so += a;
        }
        if(se==so)   return 1;
        return 0; 
    }
};