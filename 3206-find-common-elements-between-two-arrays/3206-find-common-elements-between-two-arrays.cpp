class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int> freq1(101,0),freq2(101,0);
        int ans1 = 0;
        int ans2 = 0;
        for(int i : nums1){
            freq1[i]++;
        }

        for(int i : nums2){
            if(freq1[i]>0) ans1++;
        }

        for(int i : nums2){
            freq2[i]++;
        }

        for(int i : nums1){
            if(freq2[i]>0) ans2++;
        }
        return {ans2,ans1};
    }
};