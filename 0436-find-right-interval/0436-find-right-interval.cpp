class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int, int>> startwith;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            startwith.push_back({intervals[i][0], i});
        }
        sort(startwith.begin(), startwith.end());
        for (int i = 0; i < n; i++) {
            int target = intervals[i][1];
            int left = 0, right = n - 1;
            int idx = -1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (startwith[mid].first >= target) {
                    idx = startwith[mid].second;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            ans.push_back(idx);
        }
        return ans;
    }
};