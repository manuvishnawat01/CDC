class Solution {
public:
    vector<int> robots;
    vector<int> fac;
    long long dp[101][10001];

    long long solve(int i, int j) {
        if (i == robots.size()) return 0;
        if (j == fac.size()) return 1e15;

        if (dp[i][j] != -1) return dp[i][j];

        long long skip = solve(i, j + 1);

        long long take = abs(robots[i] - fac[j]) + solve(i + 1, j + 1);

        return dp[i][j] = min(skip, take);
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        robots = robot;
        fac.clear();  // important

        sort(robots.begin(), robots.end());
        sort(factory.begin(), factory.end());

        for (auto &f : factory) {
            int pos = f[0];
            int cap = f[1];
            for (int i = 0; i < cap; i++) {
                fac.push_back(pos);
            }
        }

        memset(dp, -1, sizeof(dp));

        return solve(0, 0);
    }
};