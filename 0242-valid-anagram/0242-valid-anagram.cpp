class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        if(s.length() != t.length()) return false;
        for(auto c : s){
            mp[c]++;
        }

        for(auto c : t){
            mp[c]--;
        }

        for(auto m : mp){
            if(m.second > 0) return false;
        }
        return true;
    }
};