class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {

        int totalSum = 0;
        vector<int> mod1; 
        vector<int> mod2; 

        for(int num : nums){
            totalSum += num;
            if(num % 3 == 1) mod1.push_back(num);
            else if(num % 3 == 2) mod2.push_back(num);
        }
        if(totalSum % 3 == 0) return totalSum;
        sort(mod1.begin(), mod1.end());
        sort(mod2.begin(), mod2.end());

        int removeValue = INT_MAX;
        if(totalSum % 3 == 1){
            if (!mod1.empty()) removeValue = min(removeValue, mod1[0]);
            if (mod2.size() >= 2) removeValue = min(removeValue, mod2[0] + mod2[1]);
        }
        else{
            if(!mod2.empty()) removeValue = min(removeValue, mod2[0]);
            if(mod1.size() >= 2) removeValue = min(removeValue, mod1[0] + mod1[1]);
        }
        if(removeValue == INT_MAX) return 0;
        return totalSum - removeValue;
    }
};
