bool cmp(vector<int> &v1 ,vector<int> &v2){
    return v1[0] <v2[0];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0;
        sort(intervals.begin(),intervals.end(),cmp);
        int lastendtime = intervals[0][1];
        for(int i =1; i<intervals.size(); i++){
            if(intervals[i][0] < lastendtime){
                ans++;
                lastendtime = min(lastendtime,intervals[i][1]);
            }
            else{ 
                lastendtime = intervals[i][1];
            }
        }
        return ans;
    }
};