class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> firstIndex;
        int sum = 0;                      
        int maxLength = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                sum -= 1;
            else
                sum += 1;

            if (sum == 0) {
                maxLength = i + 1;
            }
            else if (firstIndex.find(sum) != firstIndex.end()) {
                int length = i - firstIndex[sum];
                maxLength = max(maxLength, length);
            }
            else {
                firstIndex[sum] = i;
            }
        }
        return maxLength;
    }
};
