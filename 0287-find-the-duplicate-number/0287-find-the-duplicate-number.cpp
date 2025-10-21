#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size() - 1;
        int duplicate = 0;
        for (int bit = 0; bit < 32; bit++) {
            int mask = 1 << bit;
            int countNums = 0, countRange = 0;

            for (int num : nums) {
                if (num & mask) countNums++;
            }

            for (int i = 1; i <= n; i++) {
                if (i & mask) countRange++;
            }
            if (countNums > countRange)
                duplicate |= mask;
        }
        return duplicate;
    }
};
