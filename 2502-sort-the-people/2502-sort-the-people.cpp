class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& height) {
        unordered_map<int , string> m;
        for(int i = 0; i<height.size(); i++){
        m[height[i]] = names[i];
        }
        vector<string> ans;
        sort(height.begin(),height.end(), greater<int>());
        for(int i = 0; i<height.size(); i++){
            ans.push_back(m[height[i]]);
        }
        return ans;
    }
};