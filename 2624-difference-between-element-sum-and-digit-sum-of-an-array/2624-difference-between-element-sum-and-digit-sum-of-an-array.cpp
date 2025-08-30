class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sumofelements = 0;
        for(int i =0; i<n; i++){
            sumofelements += nums[i];
        }
        int sumofdigits = 0;
        for(int i=0 ;i<n; i++){
            if(nums[i]<9) sumofdigits +=nums[i];
            else {
                int a = nums[i];
                int s = 0;
                while(a!=0){
                    int ld = a%10;
                    sumofdigits = sumofdigits+ld;
                    a = a/10;
                }
            }
        }
        int diff = sumofelements - sumofdigits;
        return diff;
    }
};