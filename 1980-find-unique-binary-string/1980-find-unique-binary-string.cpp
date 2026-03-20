class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string operate = nums[0];
        unordered_set<string> st(nums.begin(), nums.end());
        for(int i = 0; i < operate.size(); i++){
            char original = operate[i];
            operate[i] = (operate[i] == '1') ? '0' : '1';
            if(st.find(operate) == st.end()) return operate;
            operate[i] = original;
        }
        return operate;
    }
};