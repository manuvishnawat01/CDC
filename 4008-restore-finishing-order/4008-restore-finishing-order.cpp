class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;
        unordered_set<int> s ;
        for(int i=0; i<friends.size(); i++){
            s.insert(friends[i]);
        }

        for(int i = 0; i<order.size(); i++){
            int a = order[i];
            if(s.find(a) != s.end())  ans.push_back(order[i]) ;
        }
        return ans;
    }
};