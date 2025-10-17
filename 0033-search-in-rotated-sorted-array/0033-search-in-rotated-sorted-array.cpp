#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            // If target found then just return
            if (nums[mid] == target)
                return mid;

            // Check if left half is sorted 
            if (nums[low] <= nums[mid]) {
                // If target is in the left sorted half
                if (target >= nums[low] && target < nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // Otherwise, right half must be sorted
            else {
                // If target is in the right sorted half
                if (target > nums[mid] && target <= nums[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }

        return -1; // default answer if no condition is found. 
    }
};
