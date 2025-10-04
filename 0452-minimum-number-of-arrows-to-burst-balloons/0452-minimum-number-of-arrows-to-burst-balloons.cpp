class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int ans =0; 
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
            });

        int lastendtime = points[0][1];
        for(int i = 1; i< points.size(); i++){
            if(points[i][0] <=lastendtime){
                ans++;
            }
            else{
                lastendtime = points[i][1];
            }
        }
        return points.size() -ans;
    }
};