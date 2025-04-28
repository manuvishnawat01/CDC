#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> hashSet(nums1.begin(), nums1.end()); 
        unordered_set<int> result; 
        for (int num : nums2) {
            if (hashSet.count(num)) {
                result.insert(num); 
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};
