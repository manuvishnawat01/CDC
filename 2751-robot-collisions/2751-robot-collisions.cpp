class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);

        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return positions[a] < positions[b];
        });

        vector<int> st; // stores indices of robots in sorted traversal order

        for (int cur : idx) {
            while (!st.empty() && directions[st.back()] == 'R' && directions[cur] == 'L' && healths[cur] > 0) {
                int top = st.back();

                if (healths[top] < healths[cur]) {
                    st.pop_back();
                    healths[cur]--;
                    healths[top] = 0;
                } else if (healths[top] > healths[cur]) {
                    healths[top]--;
                    healths[cur] = 0;
                } else {
                    st.pop_back();
                    healths[top] = 0;
                    healths[cur] = 0;
                }
            }

            if (healths[cur] > 0) {
                st.push_back(cur);
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) ans.push_back(healths[i]);
        }
        return ans;
    }
};