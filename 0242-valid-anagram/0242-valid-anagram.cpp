class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char,int> map;
        for(auto ch : s){
            map[ch]++;
        }
        for(auto ch: t) {
            map[ch]--;
        }

        for(auto m : map){
            if(m.second > 0) return false;
        }
        return true;
    }
};