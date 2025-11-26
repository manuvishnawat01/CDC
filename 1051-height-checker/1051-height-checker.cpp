class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> sortedHeights = heights; 
        sort(sortedHeights.begin(), sortedHeights.end());  
        int miscount = 0;  
        for(int i = 0; i < heights.size(); i++) {
            if(heights[i] != sortedHeights[i]) {
                miscount++;
            }
        }
        
        return miscount; 
    }
};
