class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();

        int running_sum1 = 0, running_sum2 = 0;

        for (int i = 0; i < n; i++){
            running_sum1 += nums1[i];
        }

        for (int i = 0; i < m; i++){
            running_sum2 += nums2[i];
        }

        if (running_sum1 == running_sum2){
            return 0;
        }

        vector<int> smaller_num, larger_num;

        if (running_sum1 < running_sum2){
            smaller_num = nums1;
            larger_num = nums2;
        } else {
            smaller_num = nums2;
            larger_num = nums1;
        }

        vector<int> result;

        for (int i: smaller_num){
            result.push_back(6-i);
        }

        for (int i: larger_num){
            result.push_back(i-1);
        }

        sort(result.begin(),result.end());
        reverse(result.begin(),result.end());

        int diff = abs(running_sum1-running_sum2);

        int count = 0;

        for (int r: result){
            diff -= r;
            count += 1;
            if (diff <= 0){
                return count;
            }
        }

        return -1;
    }
};