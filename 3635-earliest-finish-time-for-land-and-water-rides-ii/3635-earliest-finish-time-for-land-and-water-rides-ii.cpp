class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m = waterStartTime.size();
        
        int minLandFinish = INT_MAX;
        for (int i = 0; i < n; i++) {
            minLandFinish = min(minLandFinish, landStartTime[i] + landDuration[i]);
        }
        
        int minWaterFinish = INT_MAX;
        for (int j = 0; j < m; j++) {
            minWaterFinish = min(minWaterFinish, waterStartTime[j] + waterDuration[j]);
        }
        
        int ans = INT_MAX;
        
        for (int i = 0; i < m; i++) {
            int finishTime;
            if (waterStartTime[i] <= minLandFinish) {
                finishTime = minLandFinish + waterDuration[i];
            } else {
                finishTime = waterStartTime[i] + waterDuration[i];
            }
            ans = min(ans, finishTime);
        }
        
        for (int i = 0; i < n; i++) {
            int finishTime;
            if (landStartTime[i] <= minWaterFinish) {
                finishTime = minWaterFinish + landDuration[i];
            } else {
                finishTime = landStartTime[i] + landDuration[i];
            }
            ans = min(ans, finishTime);
        }
        
        return ans;
    }
};