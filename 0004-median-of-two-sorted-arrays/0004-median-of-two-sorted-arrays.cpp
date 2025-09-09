class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double answer;
            int n = nums1.size(), m = nums2.size();
            int i = 0, j = 0;
            vector<int> result;
            while (i < n && j < m) {
                if (nums1[i] <= nums2[j]) {
                    result.push_back(nums1[i]);
                    i++;
                } else {
                    result.push_back(nums2[j]);
                    j++;
                }
            }

            while (i < n) {
                result.push_back(nums1[i]);
                i++;
            }
            while (j < m) {
                result.push_back(nums2[j]);
                j++;
            }

            int x = result.size();
            if(x%2 != 0) answer = result[x/2];
            else answer = ((float)result[(x-1)/2] + result[(x/2)])/2;
            return answer;
    }
};