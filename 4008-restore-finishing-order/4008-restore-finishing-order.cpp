class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        for(int i = 0; i<order.size(); i++){
            int  a = order[i];
            for(int j = 0; j<friends.size(); j++){
                if(a == friends[j]) ans.push_back(a);
            }
        }
        return ans;
    }
};