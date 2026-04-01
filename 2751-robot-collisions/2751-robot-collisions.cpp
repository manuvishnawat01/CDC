class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths,
                                      string directions) {

        int n = positions.size();

        // Step 1: store indices 0..n-1
        vector<int> order(n);
        for (int i = 0; i < n; i++) {
            order[i] = i;
        }

        // Step 2: sort indices by positions (left to right)
        sort(order.begin(), order.end(),
             [&](int a, int b) {
                 return positions[a] < positions[b];
             });

        // Stack will store indices of robots (by original index)
        vector<int> st;

        // Step 3: process robots from left to right
        for (int idx : order) {
            // While there is a possible collision:
            // top of stack is moving 'R' and current is moving 'L'
            while (!st.empty() &&
                   directions[st.back()] == 'R' &&
                   directions[idx] == 'L' &&
                   healths[idx] > 0) {

                int j = st.back(); // index of robot on stack (moving R)

                if (healths[j] < healths[idx]) {
                    // stack robot dies
                    st.pop_back();
                    healths[j] = 0;
                    // current robot loses 1 health and may collide again
                    healths[idx]--;
                } else if (healths[j] > healths[idx]) {
                    // current robot dies
                    healths[idx] = 0;
                    // stack robot loses 1 health and survives
                    healths[j]--;
                } else {
                    // equal health: both die
                    healths[j] = 0;
                    healths[idx] = 0;
                    st.pop_back();
                }
            }

            // If current robot is still alive, push it to stack
            if (healths[idx] > 0) {
                st.push_back(idx);
            }
        }

        // Step 4: collect surviving robots' healths in original order
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (healths[i] > 0) {
                ans.push_back(healths[i]);
            }
        }

        return ans;
    }
};