class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;

        string ans;

        for(char c : order){
            for(int i = 0; i< mp[c]; i++){
                ans = ans+c;
            }
            mp[c] = 0;
        }

        for(char c : s)  if(mp[c] > 0)  ans = ans+c;
        
        return ans;
    }
};