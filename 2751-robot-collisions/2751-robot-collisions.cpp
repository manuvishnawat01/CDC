class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths,
                                      string directions) {

        int n = positions.size();
        vector<int> order(n);
        for (int i = 0; i < n; i++) {
            order[i] = i;
        }

        sort(order.begin(), order.end(),
             [&](int a, int b) {
                 return positions[a] < positions[b];
             });

        vector<int> st;

        for (int idx : order) {
            while (!st.empty() &&
                   directions[st.back()] == 'R' &&
                   directions[idx] == 'L' &&
                   healths[idx] > 0) {

                int j = st.back();

                if (healths[j] < healths[idx]) {
                    st.pop_back();
                    healths[j] = 0;
                    healths[idx]--;
                } else if (healths[j] > healths[idx]) {
                    healths[idx] = 0;
                    healths[j]--;
                } else {
                    healths[j] = 0;
                    healths[idx] = 0;
                    st.pop_back();
                }
            }

            if (healths[idx] > 0) {
                st.push_back(idx);
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) {
                ans.push_back(healths[i]);
            }
        }

        return ans;
    }
};